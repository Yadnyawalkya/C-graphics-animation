#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.1415
/*void _circle(int xc1,int yc1,int r)
{
	int x1,y1,i;
		for(i=0;i<360;i++)
		{
		   x1=xc1+r*cos(i);
		   y1=yc1+r*sin(i);
		   putpixel(x1,y1,100);
		}
}*/
void rotate_wheel(int xc,int yc,int t)
	{
	int x,y;
		for(t=t;t<180;t=t+60)
			{
			x=50*cos(t*PI/180);
			y=50*sin(t*PI/180);
			line(xc+x,yc+y,xc-x,yc-y);
			}
	       circle(xc,yc,50);
	       setcolor(YELLOW);
	       circle(xc,yc,52);

	}
main()
	{
	int d=0,m=0,x;
	initgraph(&d,&m,"C:\\TC\\BGI");

		for(x=0;x<640;x++)
		{
		rotate_wheel(x,240,x%60);
		delay(5);
		cleardevice();
		rotate_wheel(x,240,x%60);
		}
	getch();
	closegraph();
}