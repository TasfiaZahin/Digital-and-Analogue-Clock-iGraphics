# include "iGraphics.h"
#include<math.h>
#include<time.h>

double o,x=500,y=360+250,sx,sy,p;
double xm=500,ym=360+220,mx,my,pm;
double xh=500,yh=360+200,hx,hy,ph,H,M,S;
int i,c,t;
int dx,h1,h2,m1,m2,s1,s2;

void zero(double x,double y)
{

	iFilledRectangle(x,y-6,60,6);
	iFilledRectangle(x,y-170,6,170);
	iFilledRectangle(x,y-170,60,6);
	iFilledRectangle(x+54,y-170,6,170);
}

void one(double x,double y)
{
	iFilledRectangle(x+54,y-170,6,170);
}

void two (double x,double y)
{
	iFilledRectangle(x,y-6,60,6);
	iFilledRectangle(x,y-170,60,6);
	iFilledRectangle(x,y-88,60,6);
	iFilledRectangle(x+54,y-88,6,88);
	iFilledRectangle(x,y-170,6,88);
}

void three(double x,double y)
{

	iFilledRectangle(x,y-6,60,6);
	iFilledRectangle(x,y-170,60,6);
	iFilledRectangle(x,y-88,60,6);
	iFilledRectangle(x+54,y-88,6,88);
	iFilledRectangle(x+54,y-170,6,82);
}

void four(double x,double y)
{
	iFilledRectangle(x,y-88,60,6);
	iFilledRectangle(x+54,y-88,6,88);
	iFilledRectangle(x+54,y-170,6,82);
	iFilledRectangle(x,y-88,5,88);
}

void five(double x,double y)
{

	iFilledRectangle(x,y-6,60,6);
	iFilledRectangle(x,y-88,60,6);
	iFilledRectangle(x+54,y-170,6,82);
	iFilledRectangle(x,y-88,5,88);
	iFilledRectangle(x,y-170,60,6);
}

void six(double x,double y)
{
	iFilledRectangle(x,y-6,60,6);
	iFilledRectangle(x,y-88,60,6);
	iFilledRectangle(x+54,y-170,6,82);
	iFilledRectangle(x,y-88,5,88);
	iFilledRectangle(x,y-170,60,6);
	iFilledRectangle(x,y-170,6,88);
}

void seven(double x,double y)
{
	iFilledRectangle(x,y-6,60,6);
	iFilledRectangle(x+54,y-170,6,170);
}

void eight(double x,double y)
{

	iFilledRectangle(x,y-6,60,6);
	iFilledRectangle(x,y-170,6,170);
	iFilledRectangle(x,y-170,60,6);
	iFilledRectangle(x+54,y-170,6,170);
	iFilledRectangle(x,y-88,60,6);
}

void nine(double x,double y)
{
	iFilledRectangle(x,y-6,60,6);
	iFilledRectangle(x,y-88,60,6);
	iFilledRectangle(x+54,y-170,6,82);
	iFilledRectangle(x,y-88,5,88);
	iFilledRectangle(x,y-170,60,6);
	iFilledRectangle(x+54,y-88,6,88);
}

void second()
 
{
	  sx=250*cos(p/57.29);
	  sy=250*sin(p/57.29);
	  x=500+sx;
	  y=360+sy;
      p=p-6;
}
void minute()
{
      mx=220*cos(pm/57.29);
	  my=220*sin(pm/57.29);
	  xm=500+mx;
	  ym=360+my;
	  pm=pm-.1;
}
void hour()
{
	hx=200*cos(ph/57.29);
	hy=200*sin(ph/57.29);
	xh=500+hx;
	yh=360+hy;
	ph=ph-1/600;

void iDraw()
{
	if(c==2){
	
	iClear();
		iSetColor(10,10,10);
	iFilledCircle(500,360,300);//Large
	   iSetColor(0,255,0);
	   iCircle(500,360,305);//out
	iSetColor(0,0,255);
	iCircle(500,360,275);//nextout
	iSetColor(255,0,0);
	for (i=1,o=(6/57.29);i<=60;i++,o+=(6/57.29))
	{   if(i%5!=0)
			iFilledCircle(500+295*cos(o),360+295*sin(o),4);
		if (i%5==0)
			iFilledCircle(0,0,0);
	}


	iSetColor(255,0,0);
	iLine(500,360,x,y);///second
	iSetColor(0,120,120);
	iLine(500,360,xm,ym);///minit
	iSetColor(20,200,40);
	iLine(500,360,xh,yh);//HR
	iSetColor(255,0,0);
	iText(500+244,360-150,"IV");//4(500+259,360-150)point
    iText(500+145,360-256,"V");//	iFilledCircle(500+150,360-260,5);//60
	iText(495,60,"VI");//iFilledCircle(500,65,5);//lower
	iText(500-155,360-257,"VII");//iFilledCircle(500-150,360-260,5);//120
	iText(200,360,"IX");//iFilledCircle(205,360,5);//left
	iText(500-255,360+145,"X");//iFilledCircle(500-260,360+150,5);//150
	iText(500+240,360+150,"II");//iFilledCircle(500+259,360+150,5);//330
	iText(500+140,360+252,"I");//	iFilledCircle(500+150,360+260,5);//300
	iText(490,650,"XII");//	iFilledCircle(500,655,5);//upper
	iText(777,360,"III");//	iFilledCircle(795,360,5);//right
	iText(500-150,360+250,"XI");//	iFilledCircle(500-150,360+260,5);//240
	iText(500-260,360-150,"VIII");//	iFilledCircle(500-260,360-150,5);//210
    iSetColor(20,50,210);
	iFilledCircle(500,360,20);//small
	}
	if (c==1){
		iClear();
	iSetColor(0,0,255);
	iFilledRectangle(85,80,5,350);//Large
	iFilledRectangle(710,80,5,350);
	iFilledRectangle(85,425,630,5);
	iFilledRectangle(85,80,630,5);

	iPoint(306,227,4);
	iPoint(306,284,4);
	iPoint(506,227,4);
	iPoint(506,284,4);
	iSetColor(255,255,255);
	iText(200,40,"Enter  'p' to pause, 'r' to resume and 'end' to exit");
	iSetColor(0,0,255);

		if(h1==0)
		{
			zero(208,340);
		}
		else if (h1==1)
		{
			one(208,340);
		}
		else if(h1==2)
		{
			two(208,340);
		}
		else if(h1==3)
		{
			three(208,340);
		}

		else if(h1==4)
		{
			four(208,340);
		}
		else if(h1==5)
		{
			five(208,340);
		}
		else if(h1==6)
		{
			six(208,340);
		}
		else if(h1==7)
		{
			seven(208,340);
		}
		else if(h1==8)
		{
			eight(208,340);
		}
		else if(h1==9)
		{
			nine(208,340);
		}

		if (h2==0)
		{
			zero(124,340);
		}
		else if (h2==1)
		{
			one(124,340);
		}
		else if(h2==2)
		{
			two(124,340);
		}
		else if(h2==3)
		{
			three(124,340);
		}
		else if(h2==4)
		{
			four(124,340);
		}
		else if(h2==5)
		{
			five(124,340);
		}
		else if(h2==6)
		{
			six(124,340);
		}
		else if(h2==7)
		{
			seven(124,340);
		}
		else if(h2==8)
		{
			eight(124,340);
		}
		else if(h2==9)
		{
			nine(124,340);
		}

		if (m1==0)
		{
			zero(408,340);
		}
		else if (m1==1)
		{
			one(408,340);
		}
		else if(m1==2)
		{
			two(408,340);
		}
		else if(m1==3)
		{
			three(408,340);
		}

		else if(m1==4)
		{
			four(408,340);
		}
		else if(m1==5)
		{
			five(408,340);
		}
		else if(m1==6)
		{
			six(408,340);
		}
		else if(m1==7)
		{
			seven(408,340);
		}
		else if(m1==8)
		{
			eight(408,340);
		}
		else if(m1==9)
		{
			nine(408,340);
		}

		if (m2==0)
		{
			zero(324,340);
		}
		else if (m2==1)
		{
			one(324,340);
		}
		else if(m2==2)
		{
			two(324,340);
		}
		else if(m2==3)
		{
			three(324,340);
		}
		else if(m2==4)
		{
			four(324,340);
		}
		else if(m2==5)
		{
			five(324,340);
		}
		else if(m2==6)
		{
			six(324,340);
		}
		else if(m2==7)
		{
			seven(324,340);
		}
		else if(m2==8)
		{
			eight(324,340);
		}
		else if(m2==9)
		{
			nine(324,340);
		}


		if (s1==0)
		{
			zero(608,340);
		}
		else if (s1==1)
		{
			one(608,340);
		}
		else if(s1==2)
		{
			two(608,340);
		}
		else if(s1==3)
		{
			three(608,340);
		}

		else if(s1==4)
		{
			four(608,340);
		}
		else if(s1==5)
		{
			five(608,340);
		}
		else if(s1==6)
		{
			six(608,340);
		}
		else if(s1==7)
		{
			seven(608,340);
		}
		else if(s1==8)
		{
			eight(608,340);
		}
		else if(s1==9)
		{
			nine(608,340);
		}

		if (s2==0)
		{
			zero(524,340);
		}
		else if (s2==1)
		{
			one(524,340);
		}
		else if(s2==2)
		{
			two(524,340);
		}
		else if(s2==3)
		{
			three(524,340);
		}
		else if(s2==4)
		{
			four(524,340);
		}
		else if(s2==5)
		{
			five(524,340);
		}
		else if(s2==6)
		{
			six(524,340);
		}
		else if(s2==7)
		{
			seven(524,340);
		}
		else if(s2==8)
		{
			eight(524,340);
		}
		else if(s2==9)
		{
			nine(524,340);
		}
	}

}




void iMouseMove(int mx, int my)
{
	
}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
			
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}


void iKeyboard(unsigned char key)
{
	if(key == 'd')
	{
		c=1;
	}
	if (key == 'a')
	{
		c=2;
	}
	
}


void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
}

void get_time()
{
	time_t rawtime;
    tm * ptm;

    time ( &rawtime );

    ptm = gmtime ( &rawtime );   //getting time from bios

    H=(ptm->tm_hour+6)%24;
	M=ptm->tm_min;
	S=(ptm->tm_sec);
	h1=(H%10);
	h2=(H/10)%10;
	m1=(M%10);
	m2=(M/10)%10;
	s1=(S%10);
	s2=(S/10)%10;
}


void second()
 
{
	  sx=250*cos(p/57.29);
	  sy=250*sin(p/57.29);
	  x=500+sx;
	  y=360+sy;
      p=p-6;
}
void minute()
{
      mx=220*cos(pm/57.29);
	  my=220*sin(pm/57.29);
	  xm=500+mx;
	  ym=360+my;
	  pm=pm-.1;
}
void hour()
{
	hx=200*cos(ph/57.29);
	hy=200*sin(ph/57.29);
	xh=500+hx;
	yh=360+hy;
	ph=ph-1/600;
}

void get_time()
{
	time_t rawtime;
    tm * ptm;

    time ( &rawtime );

    ptm = gmtime ( &rawtime );   //getting time from bios

    H=(ptm->tm_hour+6)%24;
	M=ptm->tm_min;
	S=(ptm->tm_sec);
	h1=(H%10);
	h2=(H/10)%10;
	m1=(M%10);
	m2=(M/10)%10;
	s1=(S%10);
	s2=(S/10)%10;
}

int main()
{
	time_t rawtime;
    tm * ptm;

    time ( &rawtime );

    ptm = gmtime ( &rawtime );   //getting time from bios

    H=(ptm->tm_hour+6)%24;
	M=ptm->tm_min;
	S=(ptm->tm_sec)+2;


	ph =(3-H)*30.0-30*M/60.0-30*S/3600.0+.1/600+270+90;
     
	pm= (15-M)*6.0-S/60.0+.1+270+90;

	p = (15-S)*6.0+6+270+90;
	get_time();
    second();
    minute();
    hour();
	

   
	
    iSetTimer(1000,second);
	iSetTimer(1000,minute);
	iSetTimer(1000,hour);
	iInitialize(1000, 720, "demo");
	
	iSetTimer(1000,get_time);
	iInitialize(800, 500, "demo");
	return 0;
}	