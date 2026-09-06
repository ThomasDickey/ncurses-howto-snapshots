#include <stdlib.h>
#include <curses.h>

int
main(void)
{
    int rc;

    initscr();                  /* Start curses mode              */
    printw("Hello World !!!\n");        /* Print Hello World              */
    refresh();                  /* Print it on to the real screen */
    def_prog_mode();            /* Save the tty modes             */
    endwin();                   /* End curses mode temporarily    */
    rc = system("/bin/sh");     /* Do whatever you like in cooked mode */
    reset_prog_mode();          /* Return to the previous tty mode
                                   stored by def_prog_mode()      */
    refresh();                  /* Do refresh() to restore the
                                   Screen contents                */
    printw("Another String\n"); /* Back to curses use the full    */
    printw("System returned %d\n", rc);
    refresh();                  /* capabilities of curses         */
    endwin();                   /* End curses mode                */

    return EXIT_SUCCESS;
}
