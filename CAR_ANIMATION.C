#include<stdio.h>
#include <graphics.h>
#include <dos.h>
#include <conio.h>
int main()
{
	int gd = DETECT,gm;
	int i;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	for(i=0;i<100;i++)
	{
	     //	setcolor(YELLOW);
		setfillstyle(SOLID_FILL,RED);

		line(0,420,600,420);
		line(150+i,20,200+i,50);
		line(50+i,20,25+i,50);
		rectangle(50+i,20,150+i,50); //FIX
		rectangle(25+i,50,250+i,100);
		arc(75+i,100,0,180,25);
		arc(175+i,100,0,180,25);

/*		if(i%2 == 0)
		{
			setfillstyle(SLASH_FILL,DARKGRAY);
		}            r

		else
		{
			setfillstyle(BKSLASH_FILL,DARKGRAY);
		}
  */
		setfillstyle(SLASH_FILL,DARKGRAY);
		circle(75+i,100,22);
		floodfill(75,21,DARKGRAY);
		circle(175+i,100,22);
      //		floodfill(175+i,100,DARKGRAY);
	//	rectangle(0,0,200,100);     //FRAME
	//	rectangle(0,0,200,75);      //FRAME
	//	rectangle(0,0,200,125);     //FRAME
	//	rectangle(25,50,50,100);    //FRAME
	//	rectangle(0,50,100,100);    //CIRCLE_FRAME
	//	rectangle(0,50,150,100);

		delay(50);
		cleardevice();
	}
	getch();
	return 0;
}
