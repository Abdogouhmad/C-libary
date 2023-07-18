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
    Window root;
    int scr;
    Display* dis;

    dis = XOpenDisplay(NULL);
    if (!dis)
        errx(2, "can't open the window\n");

    scr = DefaultScreen(dis);
    root = RootWindow(dis, scr);
    win = XCreateSimpleWindow(dis, root, POSX, POSY, WIDTH, HEIGHT, BORDER, 0, 0x434c5e);
    XMapWindow(dis, win);

    while (XNextEvent(dis, &env) == 0)
    {
        /*give the ability to move the mouse and create a bottun for input and print it */
        if (env.type == KeyPress)
        {
            char buf[128];
            KeySym keysym;
            int len;

            len = XLookupString(&env.xkey, buf, sizeof(buf), &keysym, NULL);
            if (keysym == XK_Escape)
                break;
            if (len == 1 && isprint(buf[0]))
                printf("Key pressed: %c\n", buf[0]);
        }
    }

    closewindow(dis, win);
    
    return 0;
}