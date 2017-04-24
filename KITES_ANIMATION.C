#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
{
      int length,count=0;
      int x1=80,y1=20;
      int x2=20,y2=40;
      int x3=40,y3=110;
      int x4=120,y4=60;
      int fX=50,fY=350;

      int gd=DETECT,gm;
      clrscr();
      initgraph(&gd,&gm,"C:\\TC\\BGI");
      setfillstyle(SOLID_FILL,BLUE);
      for(length=0;length<100;length++)
      {
      line(x1,y1,x4,y4);
      line(x1,y1,x2,y2);
      line(x1,y1,x3,y3);//cross
      line(x2,y2,x3,y3);
      line(x2,y2,x4,y4);//cross
      line(x4,y4,x3,y3);
      line(x3,y3,fX,fY);
     line(x3,y3,(x3-25),(y3+20));
     line(x3,y3,(x3+20),(y3+20));
     line((x3-25),(y3+20),(x3+20),(y3+20));

      if((rand()%2)==0)
      {
	x1=x1+10;
	x2=x2+10;
	x3=x3+10;
	x4=x4+10;
      }
      else if((rand()%2)!=0)
      {
	x1=x1-10;
	x2=x2-10;
	x3=x3-10;
	x4=x4-10;
      }

      delay(100);
      cleardevice();
      }

     /*
      line(40,20,20,60);
      line(20,60,40,100);
      line(60,60,40,100);
     */
      getch();
      closegraph();
}
