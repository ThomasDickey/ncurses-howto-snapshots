#include <curses.h>

int
main(void)
{
    int ch;

    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    ch = getch();
    endwin();
    printf("The key pressed is %d\n", ch);
}
