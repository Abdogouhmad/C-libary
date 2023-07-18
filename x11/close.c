#include "gui.h"
/**
 * closewindow - this function close the window
 * @dis: the display
 * @win: the window
*/
void closewindow(Display* dis, Window win)
{
    XUnmapWindow(dis, win);
    XDestroyWindow(dis, win);
    XCloseDisplay(dis);
    exit(0);
}