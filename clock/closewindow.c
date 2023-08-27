#include "clock.h"

/**
 * closeClockWindow - this function meant to close a window
 * @dis: the display
 * @win: the window
 * Return: nothing
 */
void closeClockWindow(Display *dis, Window win)
{
    XUnmapWindow(dis, win);
    XDestroyWindow(dis, win);
    XCloseDisplay(dis);
    exit(0);
}