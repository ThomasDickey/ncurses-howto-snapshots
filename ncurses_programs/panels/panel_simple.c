#include <stdlib.h>
#include <panel.h>

int
main(void)
{
    WINDOW *my_wins[3];
    PANEL *my_panels[3];
    int lines = 10, cols = 40, y = 2, x = 4, i;

    initscr();
    cbreak();
    noecho();

    /* Create windows for the panels */
    my_wins[0] = newwin(lines, cols, y, x);
    my_wins[1] = newwin(lines, cols, y + 1, x + 5);
    my_wins[2] = newwin(lines, cols, y + 2, x + 10);

    /*
     * Create borders around the windows so that you can see the effect
     * of panels
     */
    for (i = 0; i < 3; ++i)
        box(my_wins[i], 0, 0);

    /* Attach a panel to each window */
    /* Order is bottom up */
    /* Push 0, order: stdscr-0 */
    /* Push 1, order: stdscr-0-1 */
    /* Push 2, order: stdscr-0-1-2 */
    for (i = 0; i < 3; ++i)
        my_panels[i] = new_panel(my_wins[i]);

    /* Update the stacking order. Last-created panel will be on top */
    update_panels();

    /* Show it on the screen */
    doupdate();

    getch();

    /* Deleting panels does not erase their window */
    for (i = 0; i < 3; ++i)
        del_panel(my_panels[i]);

    endwin();
    return EXIT_SUCCESS;
}
