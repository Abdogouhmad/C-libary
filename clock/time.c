#include "clock.h"

void Clock_create(Display *dis, Window win)
{
    while (1) {
        time_t rawtime;
        struct tm *timeinfo;
        char buff[80];

        time(&rawtime);
        timeinfo = localtime(&rawtime);
        strftime(buff, sizeof(buff), "%I:%M:%S", timeinfo);

        XClearWindow(dis, win);

        XFontStruct *font_info;
        font_info = XLoadQueryFont(dis, "fixed"); 

        if (font_info != NULL) {
            XSetFont(dis, DefaultGC(dis, DefaultScreen(dis)), font_info->fid);
            XDrawString(dis, win, DefaultGC(dis, DefaultScreen(dis)), 100, 100, buff, strlen(buff));
            XUnloadFont(dis, font_info->fid);
        } else {
            XDrawString(dis, win, DefaultGC(dis, DefaultScreen(dis)), 100, 100, buff, strlen(buff));
        }

        XFlush(dis);
        sleep(1); 
    }
}
