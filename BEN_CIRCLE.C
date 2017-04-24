#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>

void _decisionPara(int,int,int);
void _drawCircle(int,int,int,int);

void main()
{
    int gd=DETECT,gm;
    int r,xcc,ycc,xc,yc;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    xc=(getmaxx()/2);
    yc=(getmaxy()/2);

    printf("\n\tXc = 400 and Yc =400 are fixed !\n");
    printf("Enter radius for circle(Ex.50): ");
    scanf("%d",&r);
    _decisionPara(xc,yc,r);
    getch();
}

void _decisionPara(int xc,int yc,int r)
{
    int x = 0,y = r;
    int d = 3 - 2 * r;
    while(x < y)
    {
	_drawCircle(xc,yc,x,y);
	x++;
    
        if(d < 0)
            d = d + 4 * x + 6;
        else
        {
            y--;
            d = d + 4 *(x - y) + 10;
        }
        _drawCircle(xc,yc,x,y);
	//   delay(50);
    }
}

void _drawCircle(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,YELLOW);
    putpixel(xc-x,yc+y,YELLOW);
    putpixel(xc+x,yc-y,YELLOW);
    putpixel(xc-x,yc-y,YELLOW);
    putpixel(xc+y,yc+x,YELLOW);
    putpixel(xc-y,yc+x,YELLOW);
    putpixel(xc+y,yc-x,YELLOW);
    putpixel(xc-y,yc-x,YELLOW);
}