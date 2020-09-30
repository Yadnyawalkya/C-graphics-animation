#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.1415
void _wheel(int xc,int yc,int t)
	{
	int x,y,j,i;
		for(j=t;j<180;j=t+60)
			{
			x=50*cos(j*PI/180);
			y=50*sin(j*PI/180);
			line(xc+x,yc+y,xc-x,yc-y);
			}
	     //	circle(xc,yc,50)

			for(i=0;i<360;i++)
			{
			  x=xc+50*cos(i);
			   y=yc+50*sin(i);
			   putpixel(x,y,100);
			}
		circle(xc,yc,52);
	}
void main()
	{
	int gd=DETECT,gm,x;
	initgraph(&gd,&gm,"C:\\TC\\BGI");

		for(x=0;x<640;x++)
		{
		_wheel(x,240,x%60);
		delay(5);
		cleardevice();
		_wheel(x,240,x%60);
		}
	getch();
	closegraph();
}
