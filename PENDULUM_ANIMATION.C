#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#define PI 3.14

void main()
{
      int gd=DETECT,gm;
      int x,y,r=50,i=0,x1,y1,th,count=0,iter;
      clrscr();
      initgraph(&gd,&gm,"C:\\TC\\BGI");
      printf("\nEnter how much iteration you want to swing pendulam \t");
      scanf("%d",&iter);
     while(count<iter)
     {
       circle(350,200,100);
      for(th=45;th<135;th++)
      {
	setcolor(YELLOW);
	x=350+(100*cos(th*(PI/180)));
	y=200+(100*sin(th*(PI/180)));
	line(350,200,x,y);
	//	floodfill(300,74,RED);
	circle(x,y,30);
	delay(10);
	cleardevice();

      }

      for(th=135;th>45;th--)
      {
	setcolor(RED);
	x=350+(100*cos(th*(PI/180)));
	y=200+(100*sin(th*(PI/180)));
	line(350,200,x,y);

	circle(x,y,30);
	delay(10);
	cleardevice();
      }
      count++;
     }
	getch();
	closegraph();

}