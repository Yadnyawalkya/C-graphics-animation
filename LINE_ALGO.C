#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
   int x1,x2,a;
   int y1,y2,b;
   int m,c,i,y;
   int gd=DETECT,gm;
	// setbkcolor(WHITE);
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   printf("Enter x1 and y1");
   scanf("%d%d",&x1,&y1);
    printf("Enter x2 and y2");
   scanf("%d%d",&x2,&y2);
   a=y2-y1;
   b=x2-x1;
   m=a/b;
    c=m*x1-y1;
   //if(m<1)
  // {
   for(i=x1;i<=x2;i++)
   {
      y=m*i+c;
      putpixel(i,y,100);

    }
  // }

   getch();
   closegraph();
   return 0;

}



