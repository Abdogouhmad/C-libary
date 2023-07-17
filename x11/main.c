#include "gui.h"
/**
 * main - this main meant to create at least a small window
 *
 * return: 0
 */

int main(void)
{
    
    Window win;
    XEvent env;

    dis = XOpenDisplay(NULL);
    if (!dis)
        errx(2, "can't open the window\n");

    scr = DefaultScreen(dis);
    root = RootWindow(dis, scr);
    win = XCreateSimpleWindow(dis, root, POSX, POSY, WIDTH, HEIGHT, BORDER, 0, 0x434c5e);
    XMapWindow(dis, win);

    while (XNextEvent(dis, &env) == 0)
    {
        /* code */
    }

    XUnmapWindow(dis, win);

    XDestroyWindow(dis, win);

    XCloseDisplay(dis);
    
    return 0;
}