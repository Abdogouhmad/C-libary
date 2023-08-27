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
    win = createClockWindow(dis, root, POSX, POSY, WIDTH, HEIGHT, BORDER, CopyFromParent, 0x607272);
    XMapWindow(dis, win);
    /*manage the window*/
    while (1)
    {
        XNextEvent(dis, &env);
        switch (env.type)
        {
        case Expose:
            Clock_create(dis, win);
            XFlush(dis);
        case KeyPress:
            break;
        case ButtonPress:
            err(EXIT_SUCCESS, "close the window\n");
        case MotionNotify:
            break;
        case ConfigureNotify:
            break;
        case ClientMessage:
            break;
        case DestroyNotify:
            break;
        default:
            break;
        }
    }
    closeClockWindow(dis, win);
    return 0;
}