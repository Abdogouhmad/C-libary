#include "gui.h"
/**
 * createwindow - this function meant to create a window
 * @dis: the display
 * @win: the window
 * @x: the x position
 * @y: the y position
 * @width: the width of the window
 * @height: the height of the window
 * @border: the border of the window
 * @depth: the depth of the window
 * @color: the color of the window
 * Return: the window
*/
Window createwindow(Display* dis, Window win, int x, int y, int width, int height, int border, int depth, unsigned long color)
{
    XSetWindowAttributes attr;
    attr.background_pixel = color;
    attr.border_pixel = color;
    attr.event_mask = ExposureMask | KeyPressMask | ButtonPressMask | ButtonReleaseMask | PointerMotionMask | StructureNotifyMask;
    win = XCreateWindow(dis, win , x, y, width, height, border, depth, InputOutput, CopyFromParent, CWBackPixel | CWBorderPixel | CWEventMask, &attr);
    XMapWindow(dis, win);

    return win;
}