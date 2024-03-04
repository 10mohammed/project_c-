#include <graphics.h>// good
#include <conio.h>
#include <dos.h>
#include <math.h>
int main(void)
{
    int i, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, j, m = 0;
    int graphic_driver = DETECT, graphic_mode;
    initgraph(&graphic_driver, &graphic_mode, "//turboc3/bgi");
   int x = getmaxx() / 2;
   int y = getmaxy() / 2;
   hvghfddgfgdgdgdfgfgfgfd
   
    while (!kbhit())
    {
        settextstyle(1, 0, 4);
        /*outtextxy(0, 0, "solar");
        outtextxy(0, 30, "system");
        outtextxy(530, 0, "puskar");
        outtextxy(530, 30, "jasu");*/
        setbkcolor(0);
        setcolor(4);
        setfillstyle(1, 4);
        fillellipse(x, y, 30, 30);
        i = 60 * cos((0 + a) * 3.14159 / 180);
        j = 50 * sin((0 + a) * 3.14159 / 180);
        a += 30;
        
        
        if (a > 360)
            a = 0;
        setcolor(8);
        setfillstyle(1, 8);
        fillellipse(x + i, y - j, 10, 10);
        settextstyle(2, 0, 6);
        outtextxy(x + i, y - j, "murcury");
        ellipse(x, y, 0, 360, 60, 50);
        i = 90 * cos((90 + b) * 3.14159 / 180);
        j = 70 * sin((90 + b) * 3.14159 / 180);
        b += 25;
        
        
        
        if (b > 360)
            b = 0;
        setcolor(14);
        setfillstyle(1, 14);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "venus");
        ellipse(x, y, 0, 360, 90, 70);
        i = 120 * cos((180 + c) * 3.14159 / 180);
        j = 100 * sin((180 + c) * 3.14159 / 180);
        c += 20;
        
        
        
        if (c > 360)
            c = 0;
        setcolor(1);
        setfillstyle(1, 1);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "earth");
        ellipse(x, y, 0, 360, 120, 100);
        i = 150 * cos((60 + d) * 3.14159 / 180);
        j = 120 * sin((60 + d) * 3.14159 / 180);
        d += 15;
        
        
        
        if (d > 360)
            d = 0;
        setcolor(4);
        setfillstyle(1, 4);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "mars");
        ellipse(x, y, 0, 360, 150, 120);
        i = 180 * cos((0 + e) * 3.14159 / 180);
        j = 150 * sin((0 + e) * 3.14159 / 180);
        e += 10;
        
        
        
        if (e > 360)
            e = 0;
        setcolor(12);
        setfillstyle(1, 12);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "jupiter");
        ellipse(x, y, 0, 360, 180, 150);
        i = 210 * cos((240 + f) * 3.14159 / 180);
        j = 170 * sin((240 + f) * 3.14159 / 180);
        f += 5;
        
        
        
        if (f > 360)
            f = 0;
        setcolor(7);
        setfillstyle(1, 7);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "saturn");
        ellipse(x, y, 0, 360, 210, 170);
        i = 240 * cos((90 + g) * 3.14159 / 180);
        j = 190 * sin((90 + g) * 3.14159 / 180);
        g += 3;
        
        
        
        if (g > 360)
            g = 0;
        setcolor(9);
        setfillstyle(1, 9);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "uranus");
        ellipse(x, y, 0, 360, 240, 190);
        i = 270 * cos((270 + h) * 3.14159 / 180);
        j = 210 * sin((270 + h) * 3.14159 / 180);
        h += 2;
        
        
        
        if (h > 360)
            h = 0;
        setcolor(9);
        setfillstyle(1, 9);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "neptune");
        ellipse(x, y, 0, 360, 270, 210);
        i = 300 * cos((330 + g) * 3.14159 / 180);
        j = 230 * sin((330 + g) * 3.14159 / 180);
        m++;
        
        
        
        if (m > 360)
            m = 0;
        setcolor(6);
        setfillstyle(1, 6);
        fillellipse(x + i, y - j, 10, 10);
        outtextxy(x + i, y - j, "pluto");
        ellipse(x, y, 0, 360, 300, 230);
        delay(100);
        cleardevice();
    }
    getch();
    closegraph();
    return 0;
}
