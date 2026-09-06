#include <stdlib.h>
#include <string.h>
#include <curses.h>

#define POSX 10
#define POSY 5
#define DISC_CHAR '*'
#define PEG_CHAR '#'
#define TIME_OUT 300

#define NUM_PEGS 3

typedef struct _peg_struct {
    int n_discs;                /* Number of discs at present   */
    int bottomx, bottomy;       /* bottom x, bottom y co-ord    */
    int *sizes;                 /* The disc sizes array         */
} peg;

int store_n_discs;
const char *welcome_string = "Enter the number of discs you want to be solved: ";

static void
free_pegs(peg * p_my_pegs)
{
    int i;

    for (i = 0; i < NUM_PEGS; ++i)
        free(p_my_pegs[i].sizes);
}

static void
move_disc(peg * p_my_pegs, int n_discs, int src, int dst)
{
    int temp, index;

    --p_my_pegs[src].n_discs;
    index = 0;
    while (p_my_pegs[src].sizes[index] == 0 && index != n_discs)
        ++index;
    temp = p_my_pegs[src].sizes[index];
    p_my_pegs[src].sizes[index] = 0;

    index = 0;
    while (p_my_pegs[dst].sizes[index] == 0 && index != n_discs)
        ++index;
    if (--index >= 0) {
        p_my_pegs[dst].sizes[index] = temp;
        ++p_my_pegs[dst].n_discs;
    }
}

static void
check_usr_response(peg * p_my_pegs)
{
    int ch;

    ch = getch();               /* Waits for TIME_OUT milliseconds */
    if (ch == ERR)
        return;
    else if (ch == KEY_F(1)) {
        free_pegs(p_my_pegs);
        endwin();
        exit(EXIT_SUCCESS);
    }
}

static void
init_pegs(peg * p_my_pegs, int n_discs)
{
    int size, temp, i;

    p_my_pegs[0].n_discs = n_discs;

    /* Allocate memory for size array
     * atmost the number of discs on a peg can be n_discs
     */
    for (i = 0; i < NUM_PEGS; ++i) {
        p_my_pegs[i].sizes = (int *) calloc((size_t) n_discs + 1, sizeof(int));
        if (p_my_pegs[i].sizes == NULL) {
            endwin();
            perror("init_pegs");
            exit(EXIT_FAILURE);
        }
    }
    size = 3;
    for (i = 0; i < n_discs; ++i, size += 2)
        p_my_pegs[0].sizes[i] = size;

    temp = (p_my_pegs[0].sizes[n_discs - 1] / 2);
    p_my_pegs[0].bottomx = POSX + 1 + temp;
    p_my_pegs[0].bottomy = POSY + 2 + n_discs;

    p_my_pegs[1].bottomx = p_my_pegs[0].bottomx + 2 + 2 * temp;
    p_my_pegs[1].bottomy = POSY + 2 + n_discs;

    p_my_pegs[2].bottomx = p_my_pegs[1].bottomx + 2 + 2 * temp;
    p_my_pegs[2].bottomy = POSY + 2 + n_discs;
}

static void
show_pegs(WINDOW *win, peg * p_my_pegs, int n_discs)
{
    int i, j, k, x, y, size;

    wclear(win);
    attron(A_REVERSE);
    mvprintw(24, 0, "Press F1 to Exit");
    attroff(A_REVERSE);
    for (i = 0; i < NUM_PEGS; ++i)
        mvwprintw(win, p_my_pegs[i].bottomy - n_discs - 1,
                  p_my_pegs[i].bottomx, "%c", PEG_CHAR);
    y = p_my_pegs[0].bottomy - n_discs;
    for (i = 0; i < NUM_PEGS; ++i)      /* For each peg */
    {
        for (j = 0; j < n_discs; ++j)   /* For each row */
        {
            if (p_my_pegs[i].sizes[j] != 0) {
                size = p_my_pegs[i].sizes[j];
                x = p_my_pegs[i].bottomx - (size / 2);
                for (k = 0; k < size; ++k)
                    mvwprintw(win, y, x + k, "%c", DISC_CHAR);
            } else
                mvwprintw(win, y, p_my_pegs[i].bottomx, "%c", PEG_CHAR);
            ++y;
        }
        y = p_my_pegs[0].bottomy - n_discs;
    }
    wrefresh(win);
}

static void
solve_hanoi(peg * p_my_pegs, int n_discs, int src, int aux, int dst)
{
    if (n_discs == 0)
        return;
    solve_hanoi(p_my_pegs, n_discs - 1, src, dst, aux);
    move_disc(p_my_pegs, store_n_discs, src, dst);
    show_pegs(stdscr, p_my_pegs, store_n_discs);
    check_usr_response(p_my_pegs);
    solve_hanoi(p_my_pegs, n_discs - 1, aux, src, dst);
}

/* -------------------------------------------------------------*
 * startx = 0 means at present x                                *
 * starty = 0 means at present y                                *
 * win = NULL means take stdscr                                 *
 * -------------------------------------------------------------*/

static void
print_in_middle(int startx, int starty, int width, const char *string, WINDOW *win)
{
    int length, x, y;
    float temp;

    if (win == NULL)
        win = stdscr;
    getyx(win, y, x);
    if (startx != 0)
        x = startx;
    if (starty != 0)
        y = starty;
    if (width == 0)
        width = 80;

    length = (int) strlen(string);
    temp = (float) (width - length) / 2;
    x = startx + (int) temp;
    mvwprintw(win, y, x, "%s", string);
    refresh();
}

int
main(void)
{
    int n_discs;
    peg my_pegs[NUM_PEGS];

    initscr();                  /* Start curses mode            */
    cbreak();                   /* Line buffering disabled. Pass on every thing */
    keypad(stdscr, TRUE);
    curs_set(FALSE);

    print_in_middle(0, LINES / 2, COLS, welcome_string, NULL);
    scanw("%d", &n_discs);

    timeout(TIME_OUT);
    noecho();
    store_n_discs = n_discs;

    init_pegs(my_pegs, n_discs);
    show_pegs(stdscr, my_pegs, n_discs);
    solve_hanoi(my_pegs, n_discs, 0, 1, 2);

    free_pegs(my_pegs);
    endwin();                   /* End curses mode                */
    return EXIT_SUCCESS;
}
