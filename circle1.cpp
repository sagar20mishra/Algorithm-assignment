#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\BGI");
    circle(350,250,100);
    closegraph();
    return 0;
    }
