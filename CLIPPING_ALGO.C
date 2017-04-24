#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
 {
   int gd=DETECT,gm,i;
   float x1=100,y1=100,x2=600,y2=600,slope;
   float xmax=400,ymax=200,xmin=200,ymin=400;
   float first[4]={0,0,0,0};
   float last[4]={0,0,0,0};
   float REG[4]={0,0,0,0}																																				;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   clrscr();

  slope=(y2-y1)/(x2-x1);
  if(x1<xmin) first[0]=1;
  if(x1>xmax) first[1]=1;
  if(y1>ymax) first[2]=1;
  if(y1<ymin) first[3]=1;
  if(x2<xmin) last[0]=1;
  if(x2>xmax) last[1]=1;
  if(y2>ymax) last[2]=1;
  if(y2<ymin) last[3]=1;

  for(i=0;i<4;i++)
  {
	  REG[i]=first[i]&&last[i];
  }
  if((REG[0]==0)&&(REG[1]==0)&&(REG[2]==0)&&(REG[3]==0))
   {
     if((first[0]==0)&&(first[1]==0)&&(first[2]==0)&&(first[3]==0)&&(last[0]==0)&&(last[1]==0)&&(last[2]==0)&&(last[3]==0))
     {
		  cleardevice();
		  printf("\n LINES ARE INTERRIER TO THE CLIPING WINDOW ! =>");
		  line(x1,y1,x2,y2);
		  rectangle(xmin,ymin,xmax,ymax);
		  getch();
	 }
     else
     {
      cleardevice();
	  printf("\n LINES ARE EXTERIER TO THE CLIPING WINDOW ! =>");
      rectangle(xmin,ymin,xmax,ymax);
      line(x1,y1,x2,y2);
      getch();

	  if((first[2]==0)&&(first[3]==1))
      {
			x1=x1+(ymin-y1)/slope;
			y1=ymin;
      }
      if((last[2]==0)&&(last[3]==1))
      {
			x2=x2+(ymin-y2)/slope;
			y2=ymin;
      }
      if((first[2]==1)&&(first[3]==0))
      {
			x1=x1+(ymax-y1)/slope;
			y1=ymax;
      }
      if((last[2]==1)&&(last[3]==0))
      {
			x2=x2+(ymax-y2)/slope;
			y2=ymax;
      }
      if((first[1]==0)&&(first[0]==1))
      {
			y1=y1+slope*(xmin-x1);
			x1=xmin;
      }
      if((last[1]==0)&&(last[0]==1))
      {
			y2=y2+slope*(xmin-x2);
			x2=xmin;
      }
      if((first[1]==1)&&(first[0]==0))
      {
			y1=y1+slope*(xmax-x1);
			x1=xmax;
      }
      if((last[1]==1)&&(last[0]==0))
      {
	y2=y2+slope*(xmax-x2);
	x2=xmax;
    }
      clrscr();
      cleardevice();
      setcolor(YELLOW);
      printf("\nLINE AFTER CLIPPING => ");
      rectangle(xmin,ymin,xmax,ymax);
      line(x1,y1,x2,y2);
      getch();
     }
   }
  else
   {
   clrscr();
    cleardevice();
    setcolor(YELLOW);
    printf("\nLINE NOT FOUND");
    rectangle(xmin,ymin,xmax,ymax);
    }
   getch();
   closegraph();
 }
