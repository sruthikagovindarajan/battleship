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
#include<dos.h>
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
/*
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
  case 9:x=0;y=1;break;
case 10: x=0;y=0;break;
 case 11:x=1;y=0;break;
  case 12:x=2;y=0;break;
  case 13:x=3;y=0;break;
  case 14:y=0;x=4;break;
  case 15:x=5;y=0;break;
  case 16:x=6;y=0;break;
  case 17:x=7;y=0;break;
  case 18:x=0;y=1;break;
  }             */
  if(pos>0&&pos<9)
   y=0;
  else if(pos>8 && pos<17)
   y=1;
  else if(pos>16 && pos<25)
   y=2;
  else if(pos>24 && pos<33)
   y=3;
  else if(pos>32 && pos<41)
   y=4;
  else if(pos>40 && pos<49)
  y=5;
  else if(pos>48 && pos<65)
  y=6;
  circle(30*((pos-1)%8)+185,30*y+60 ,5);
}
}
void lines()
{
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

}
void display()
{
 gotoxy(25,5);cout<<"1";
 gotoxy(28,5);cout<<"2";
 gotoxy(32,5);cout<<"3";
 gotoxy(36,5);cout<<"4";
 gotoxy(40,5);cout<<"5";
 gotoxy(43,5);cout<<"6";
 gotoxy(47,5);cout<<"7";
 gotoxy(51,5);cout<<"8";
 //------------------------//
 gotoxy(25,7);cout<<"9";
 gotoxy(27,7);cout<<"10";
 gotoxy(31,7);cout<<"11";
 gotoxy(35,7);cout<<"12";
 gotoxy(39,7);cout<<"13";
 gotoxy(42,7);cout<<"14";
 gotoxy(46,7);cout<<"15";
 gotoxy(50,7);cout<<"16";
 //--------------------------//

 gotoxy(24,9);cout<<"17";
 gotoxy(27,9);cout<<"18";
 gotoxy(31,9);cout<<"19";
 gotoxy(35,9);cout<<"20";
 gotoxy(39,9);cout<<"21";
 gotoxy(42,9);cout<<"22";
 gotoxy(46,9);cout<<"23";
 gotoxy(50,9);cout<<"24";
//---------------------------//
 gotoxy(24,11);cout<<"25";
 gotoxy(27,11);cout<<"26";
 gotoxy(31,11);cout<<"27";
 gotoxy(35,11);cout<<"28";
 gotoxy(39,11);cout<<"29";
 gotoxy(42,11);cout<<"30";
 gotoxy(46,11);cout<<"31";
 gotoxy(50,11);cout<<"32";
//-------------------------------//
 settextstyle(0,0,1);
 outtextxy(185,190,"33") ;
 gotoxy(27,12);cout<<"34";
 gotoxy(31,12);cout<<"35";
 gotoxy(35,12);cout<<"36";
 gotoxy(39,12);cout<<"37";
 gotoxy(42,12);cout<<"38";
 gotoxy(46,12);cout<<"39";
 gotoxy(50,12);cout<<"40";
//-------------------------------//
 gotoxy(24,14);cout<<"41";
 gotoxy(27,14);cout<<"42";
 gotoxy(31,14);cout<<"43";
 gotoxy(35,14);cout<<"44";
 gotoxy(39,14);cout<<"45";
 gotoxy(42,14);cout<<"46";
 gotoxy(46,14);cout<<"47";
 gotoxy(50,14);cout<<"48";
//------------------------------//
 gotoxy(24,16);cout<<"49";
 gotoxy(27,16);cout<<"50";
 gotoxy(31,16);cout<<"51";
 gotoxy(35,16);cout<<"52";
 gotoxy(39,16);cout<<"53";
 gotoxy(42,16);cout<<"54";
 gotoxy(46,16);cout<<"55";
 gotoxy(50,16);cout<<"56";
//------------------------------//
 gotoxy(24,18);cout<<"57";
 gotoxy(27,18);cout<<"58";
 gotoxy(31,18);cout<<"59";
 gotoxy(35,18);cout<<"60";
 gotoxy(39,18);cout<<"61";
 gotoxy(42,18);cout<<"62";
 gotoxy(46,18);cout<<"63";
 gotoxy(50,18);cout<<"64";
//-------------------------------//

}

void input()
{
int a[5],b[5],c[5],d[5],e[5],x,y;
outtextxy(50,295,"Enter input for CRUISER(5)");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
for(int i=0;i<5;i++)
 cin>>a[i];
drawcircle(5,a);
outtextxy(50,325,"Enter input for (4)");
cout<<"\n";
for( i=0;i<4;i++)
{   cout<<"\t\t";
cin>>b[i];
}
drawcircle(4,b);
outtextxy(50,355,"Enter input for (3)");
cout<<"\n\t\t";
for(i=0;i<3;i++)
   cin>>c[i];
drawcircle(3,c);
outtextxy(50,390,"Enter input for (3)");
cout<<"\n\t\t";
for(i=0;i<3;i++)
   cin>>d[i];
drawcircle(3,d);
outtextxy(50,420,"Enter input for CRUISER(2)");
cout<<"\n\t\t";
for(i=0;i<2;i++)
  cin>>e[i];
drawcircle(2,e);
	 delay(2000);
}

void blocks()
{
head();
 start:
 cleardevice();
 setbkcolor(BROWN);

 setcolor(YELLOW);
 lines();
 gotoxy(35,2);
 cout<<"BATTLESHIPS";
display();
delay(2000);

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