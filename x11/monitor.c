#include "gui.h"
/**
 * run - this function meant to manage the window
 * @env: the event
 * @dis: the display
 * return: void
*/
void run(XEvent env, Display* dis)
{
    while(1)
    {
        XNextEvent(dis, &env);
        switch(env.type)
        {
            case Expose:
                break;
            case KeyPress:
                break;
            case ButtonPress:
                err(EXIT_SUCCESS,"close the window\n");
                return;
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
    return;
}