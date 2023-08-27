#include "clock.h"
/**
 * main - this function meant to create a window
 *
 */
int main()
{
    Window win;
    XEvent env;
    Window root;
    int scr;
    Display *dis;

    if ((dis = XOpenDisplay(NULL)) == NULL)
        errx(2, "cannot open display\n");

    scr = DefaultScreen(dis);
    root = RootWindow(dis, scr);
    win = createClockWindow(dis, root, POSX, POSY, WIDTH, HEIGHT, BORDER, CopyFromParent, 0x4c566a);
    XMapWindow(dis, win);
    /*manage the window*/
    run(dis, win, env);
    closeClockWindow(dis, win);
    return 0;
}