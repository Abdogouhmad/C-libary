#ifndef clock_H
#define clock_H
/*macros*/
#define POSY    1000
#define POSX    500
#define WIDTH   1000
#define HEIGHT  500
#define BORDER  20
/*headers*/
#include <stdio.h>
#include <stdlib.h>
#include <err.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xos.h>
#include <X11/keysym.h>
#include <X11/Xutil.h>
/*prototypes*/
Window createClockWindow(Display* dis, Window win, int x, int y, int width, int height, int border, int depth, unsigned long color);
void closeClockWindow(Display* dis, Window win);
void Clock_create(Display* dis, Window win);
void run(Display* dis, Window win, XEvent event);
#endif
