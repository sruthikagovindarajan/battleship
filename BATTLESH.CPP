#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<ctype.h>
#include<fstream.h>

void head()
{ int gdriver=DETECT,gmode,errorcode;
  initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
}

void drawcircle(int size,int *arr)
{
int x,y;
for(int i=0;i<size;i++)
{
int pos=arr[i];
switch(pos)
{
case 1: x=0;y=0;break;
 case 2:x=1;y=0;break;
  case 3:x=2;y=0;break;
  case 4:x=3;y=0;break;
  case 5:y=0;x=4;break;
  case 6:x=5;y=0;break;
  case 7:x=6;y=0;break;
  case 8:x=7;y=0;break;
  case 9:x=8;y=0;break;
  }
  circle(30*x+185,30*y+60 ,5);
}
}
void blocks()
{
head();
 start:
 cleardevice();
 setbkcolor(BROWN);

 setcolor(YELLOW);
 //horizontal lines
 line(170,50,410,50);
 line(170,80,410,80);
 line(170,110,410,110);
 line(170,140,410,140);
 line(170,170,410,170);
 line(170,200,410,200);
 line(170,230,410,230);
 line(170,260,410,260);
 line(170,290,410,290);
 //vertical line
  line(170,50,170,290);
 line(200,50,200,290);
 line(230,50,230,290);
 line(260,50,260,290);
 line(290,50,290,290);
 line(320,50,320,290);
 line(350,50,350,290);
  line(380,50,380,290);
 line(410,50,410,290);

 gotoxy(35,2);
 cout<<"BATTLESHIPS";
/* gotoxy(18,6);cout<<"1";
 gotoxy(24,6);cout<<"2";
 gotoxy(30,6);cout<<"3";
 gotoxy(36,6);cout<<"4";
 gotoxy(42,6);cout<<"5";
 gotoxy(48,6);cout<<"6";
 gotoxy(54,6);cout<<"7";
 gotoxy(60,6);cout<<"8";
 gotoxy(18,9);cout<<"9";
 gotoxy(24,9);cout<<"10";
 gotoxy(30,9);cout<<"11";
 gotoxy(36,9);cout<<"12";
 gotoxy(42,9);cout<<"13";
 gotoxy(48,9);cout<<"14";
 gotoxy(54,9);cout<<"15";
 gotoxy(60,9);cout<<"16";
 gotoxy(17,12);cout<<"17";
 gotoxy(23,12);cout<<"18";
 gotoxy(29,12);cout<<"19";
 gotoxy(35,12);cout<<"20";
 gotoxy(41,12);cout<<"21";
 gotoxy(47,12);cout<<"22";
 gotoxy(53,12);cout<<"23";
 gotoxy(59,12);cout<<"24";
*/int a[5],b[5],c[5],d[5],e[5],x,y;
outtextxy(50,320,"Enter input for CRUISER(5)");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t";
for(int i=0;i<5;i++)
{
cin>>a[i];
cout<<"\t\t";
}
drawcircle(5,a);
outtextxy(50,350,"Enter input for (4)");
for( i=0;i<4;i++)
{   cout<<"\t\t";
cin>>b[i];
}
drawcircle(4,b);

outtextxy(50,390,"Enter input for (3)");
cout<<"\n\t\t";
for(i=0;i<3;i++)
{
cin>>c[i];
}
drawcircle(3,c);


outtextxy(50,420,"Enter input for (3)");
cout<<"\n\t\t";
for(i=0;i<3;i++)
{
cin>>d[i];
}
drawcircle(3,d);

outtextxy(50,450,"Enter input for CRUISER(2)");
for(i=0;i<2;i++)
{
cout<<"\n\t\t";
cin>>e[i];
}
drawcircle(2,e);
	      getch();
}


void tic()
{clrscr();
int driver=DETECT,mode;
initgraph(&driver, &mode, "c:\\turboc3\\bgi");
setcolor(CYAN);
rectangle(0,0,639,479);
rectangle(20,320,565,440);
setfillstyle(GREEN,8);
floodfill(100,100,CYAN);
setcolor(YELLOW);
settextstyle(10,0,2);
outtextxy(200,50,"BATTLESHIPS");
settextstyle(3,0,1);
ifstream t("TicTacToe.txt");
char line[150];
int x=40,y=290;
while(t)
{t.getline(line,200,',');
 outtextxy(x,y,line);
 if(y==290)
 y+=30;
 else y+=23;}
 t.close();
getch();
closegraph();}

void main()
 {    int ch;
   int driver=DETECT,mode,errorcode;
    initgraph(&driver, &mode, "c:\\turboc3\\bgi");
     setbkcolor(7);
     setcolor(RED);
     settextstyle(10,HORIZ_DIR,5);
     outtextxy(90,80,"BATTLESHIPS");
       getch();
     closegraph();

     do{
   int driver = DETECT, mode, errorcode;
  initgraph(&driver, &mode, "c:\\turboc3\\bgi");
    setbkcolor(3);
    setcolor(BLUE);
    settextstyle(0,HORIZ_DIR,5);
    cout<<"\t\t\t\t";
    outtextxy(200,3,"GAMES");
    settextstyle(3,HORIZ_DIR,4);
    outtextxy(3,80,"MENU:");
    settextstyle(6,HORIZ_DIR,3);
    outtextxy(15,125,"1.Play");
    outtextxy(15,155,"2.Instructions");
    outtextxy(15,190,"3.Exit");
    outtextxy(15,265,"ENTER YOUR CHOICE");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t";
    cin>>ch;
switch(ch)
    {
case 1:
int driver=DETECT,mode;
initgraph(&driver, &mode, "c:\\turboc3\\bgi");
blocks();	break;
     case 2:tic();
		break;
case 3:cleardevice();
     setbkcolor(MAGENTA);
     setcolor(YELLOW);
     settextstyle(3,HORIZ_DIR,6);
     outtextxy(250,150,"BYE.....");
     outtextxy(50,300,"HOPE YOU HAD FUN....:) :D");

getch();
    exit(0);
default: cout<<"\n\t\t\tinvalid choice.. enter a valid choice";
    cin>>ch;
  }


  closegraph();


}while(1);
}