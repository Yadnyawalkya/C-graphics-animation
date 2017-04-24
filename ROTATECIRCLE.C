#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	int r=20,x=100,y=100;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	for(x=100;x<500;x++)
	{
		circle(x,y,r);
		delay(10);
		cleardevice();
	}
	getch();
	closegraph();
return 0;
}
