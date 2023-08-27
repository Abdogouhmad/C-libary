#include "clock.h"

void run(Display* dis, Window win, XEvent event)
{
    
    while (1)
    {
        XNextEvent(dis, &event);
        switch (event.type)
        {
        case Expose:
            Clock_create(dis, win);
            XFlush(dis);
            break;
        case KeyPress:
            break;
        case ButtonPress:
            err(EXIT_SUCCESS, "close the window\n");
            return;
            break;
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
}
