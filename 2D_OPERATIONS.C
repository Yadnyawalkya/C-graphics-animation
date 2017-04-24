#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#define pi 3.145

void _AXIS();
void _GETSHAPE();
void _TRANS(int x,int y);
void _ROTA(float angle,int xf2,int yf2);
void _SCAL(int Sx,int Sy,int xf1,int yf1);

int main()
{
	int gd=DETECT,gm;
	int a,b,choice,xf1,yf1,xf2,yf2,Sx,Sy;
	double angle;
	
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	
	_AXIS();
	_GETSHAPE();
	printf("----------------------------------------------------------------");
	printf("\n1.Translation 2.Rotation 3.Scalling:\n Enter Choice :");
	scanf("%d",&choice);
	printf("----------------------------------------------------------------");

	switch(choice)
	{
		case 1:
			cleardevice();
			printf("\n Enter the translation vector dx & dy:");
			scanf("%d%d",&a,&b);
			_TRANS(a,b);
			break;
			
		case 2:
			printf("\n Enter angle:");
			scanf("%f",&angle);
			printf("\n Enter fixed point xf & yf");
			scanf("%d%d",&xf2,&yf2);
			_ROTA(angle,xf2,yf2);
			break;
			
		case 3:
			printf("\n Enter scalling vector Sx & Sy:");
			scanf("%d%d",&Sx,&Sy);
			printf("\n Enter fixed point xf & yf");
			scanf("%d%d",&xf1,&yf1);
			_SCAL(Sx,Sy,xf1,yf1);
			break;
	}
	delay(700);

getch();
closegraph();
return 0;
}

void _AXIS()
{
	line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
}

void _GETSHAPE()
{
	line(10+getmaxx()/2,getmaxy()/2-20,30+getmaxx()/2,getmaxy()/2-20);
	line(10+getmaxx()/2,getmaxy()/2-20,20+getmaxx()/2,getmaxy()/2-50);
	line(20+getmaxx()/2,getmaxy()/2-50,30+getmaxx()/2,getmaxy()/2-20);
}


void _TRANS(int a,int b)
{

	cleardevice();
	_AXIS();
	setcolor(YELLOW);
	line(10+getmaxx()/2+a,getmaxy()/2-20+b,30+getmaxx()/2+a,getmaxy()/2-20+b);
	line(10+getmaxx()/2+a,getmaxy()/2-20+b,20+getmaxx()/2+a,getmaxy()/2-50+b);
	line(20+getmaxx()/2+a,getmaxy()/2-50+b,30+getmaxx()/2+a,getmaxy()/2-20+b);
}


void _ROTA(float angle,int xf2,int yf2)
{
	int a1,a2,b1,b2,a3,b3,xf,yf,f1,f2,f3,f4,f5,f6;
	float point;
	cleardevice();
	setcolor(RED);
	_AXIS();
	xf=xf2+getmaxx()/2;
	yf=yf2+getmaxy()/2;
	a1= 10+getmaxx()/2;
	b1= getmaxy()/2-20;
	a2= 30+getmaxx()/2;
	b2= getmaxy()/2-20;
	a3= 20+getmaxx()/2;
	b3= getmaxy()/2-50;

	point=(angle*pi)/180;

	f1= xf+(a1-xf)*cos(point)-(b1-yf)*sin(point);
	f2= yf+(b1-yf)*cos(point)+(a1-xf)*sin(point);
	f3= xf+(a2-xf)*cos(point)-(b2-yf)*sin(point);
	f4= yf+(b2-yf)*cos(point)+(a2-xf)*sin(point);
	f5= xf+(a3-xf)*cos(point)-(b3-yf)*sin(point);
	f6= yf+(b3-yf)*cos(point)+(a3-xf)*sin(point);

	line(f1,f2,f3,f4);
	line(f1,f2,f5,f6);
	line(f5,f6,f3,f4);


}
void _SCAL(int Sx,int Sy,int xf1,int yf1)
{

	int a1,a2,b1,b2,a3,b3,f1,f2,f3,f4,f5,f6,xf,yf;
	cleardevice();
	setcolor(GREEN);
	_AXIS();
	xf=xf1+getmaxx()/2;
	yf=yf1+getmaxy()/2;
	a1= 10+getmaxx()/2;
	b1= getmaxy()/2-20;
	a2= 30+getmaxx()/2;
	b2= getmaxy()/2-20;
	a3= 20+getmaxx()/2;
	b3= getmaxy()/2-50;
	f1= a1*Sx+xf-xf*Sx;
	f2= b1*Sy+yf-yf*Sy;
	f3= a2*Sx+xf-xf*Sx;
	f4= b2*Sy+yf-yf*Sy;
	f5= a3*Sx+xf-xf*Sx;
	f6= b3*Sy+yf-yf*Sy;
	line(f1,f2,f3,f4);
	line(f1,f2,f5,f6);
	line(f5,f6,f3,f4);
}