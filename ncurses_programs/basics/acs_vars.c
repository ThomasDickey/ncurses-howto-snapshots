#include <stdlib.h>
#include <curses.h>

int
main(void)
{
    initscr();

#define SHOW(string, acs) printw("%-30s", string); addch(acs); printw("\n")
    /* *INDENT-OFF* */
    SHOW("Upper left corner",        ACS_ULCORNER);
    SHOW("Lower left corner",        ACS_LLCORNER);
    SHOW("Lower right corner",       ACS_LRCORNER);
    SHOW("Tee pointing right",       ACS_LTEE);
    SHOW("Tee pointing left",        ACS_RTEE);
    SHOW("Tee pointing up",          ACS_BTEE);
    SHOW("Tee pointing down",        ACS_TTEE);
    SHOW("Horizontal line",          ACS_HLINE);
    SHOW("Vertical line",            ACS_VLINE);
    SHOW("Large Plus or cross over", ACS_PLUS);
    SHOW("Scan Line 1",              ACS_S1);
    SHOW("Scan Line 3",              ACS_S3);
    SHOW("Scan Line 7",              ACS_S7);
    SHOW("Scan Line 9",              ACS_S9);
    SHOW("Diamond",                  ACS_DIAMOND);
    SHOW("Checker board (stipple)",  ACS_CKBOARD);
    SHOW("Degree Symbol",            ACS_DEGREE);
    SHOW("Plus/Minus Symbol",        ACS_PLMINUS);
    SHOW("Bullet",                   ACS_BULLET);
    SHOW("Arrow Pointing Left",      ACS_LARROW);
    SHOW("Arrow Pointing Right",     ACS_RARROW);
    SHOW("Arrow Pointing Down",      ACS_DARROW);
    SHOW("Arrow Pointing Up",        ACS_UARROW);
    SHOW("Board of squares",         ACS_BOARD);
    SHOW("Lantern Symbol",           ACS_LANTERN);
    SHOW("Solid Square Block",       ACS_BLOCK);
    SHOW("Less/Equal sign",          ACS_LEQUAL);
    SHOW("Greater/Equal sign",       ACS_GEQUAL);
    SHOW("Pi",                       ACS_PI);
    SHOW("Not equal",                ACS_NEQUAL);
    SHOW("UK pound sign",            ACS_STERLING);
    /* *INDENT-ON* */

    refresh();
    getch();
    endwin();

    return EXIT_SUCCESS;
}
