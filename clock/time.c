#include "clock.h"

void Clock_create(Display *dis, Window win)
{
    XFontStruct *fontInfo;
    char *fontName = "-*-helvetica-bold-r-*-*-120-*-*-*-*-*-*-*"; // Example font name and size

    fontInfo = XLoadQueryFont(dis, fontName);
    if (!fontInfo)
    {
        fprintf(stderr, "Font not found!\n");
        return;
    }

    XSetFont(dis, DefaultGC(dis, DefaultScreen(dis)), fontInfo->fid);

    while (1)
    {
        time_t rawtime;
        struct tm *timeinfo;
        char buff[80];

        time(&rawtime);
        timeinfo = localtime(&rawtime);
        strftime(buff, sizeof(buff), "%I:%M:%S", timeinfo);

        XClearWindow(dis, win);

        XDrawString(dis, win, DefaultGC(dis, DefaultScreen(dis)), 100, 100, buff, strlen(buff));

        XFlush(dis);
        sleep(1);
    }

    XFreeFont(dis, fontInfo);
}
