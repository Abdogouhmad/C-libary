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
    Display *dis;

    if ((dis = XOpenDisplay(NULL)) == NULL)
        errx(2, "cannot open display\n");

    scr = DefaultScreen(dis);
    root = RootWindow(dis, scr);

    win = createwindow(dis, root, POSX, POSY, WIDTH, HEIGHT, BORDER, CopyFromParent, 0x607272);

    XMapWindow(dis, win);
    /*manage the window*/
    run(env, dis);
    /*function for closing the simple window*/
    closewindow(dis, win);

    return 0;
}