

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

void draw(int pos)
{
int x,y;
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
  else if(pos>48 && pos<57)
  y=6;
  else if(pos>56 && pos<65)
  y=7;
  setcolor(RED);
circle(30*((pos-1)%8)+185,30*y+60 ,5);
  setfillstyle(SOLID_FILL,RED);
  floodfill(30*((pos-1)%8)+185,30*y+60,RED );

}
void drawcircle(int size,int *arr)
{
int x,y;
for(int i=0;i<size;i++)
{
int pos=arr[i];
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
  else if(pos>48 && pos<57)
  y=6;
  else if(pos>56 && pos<65)
  y=7;
  setcolor(RED);
circle(30*((pos-1)%8)+185,30*y+60 ,5);
  setfillstyle(SOLID_FILL,RED);
  floodfill(30*((pos-1)%8)+185,30*y+60,RED );

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
 outtextxy(192,72,"1");
outtextxy(222,72,"2");
 outtextxy(252,72,"3");
 outtextxy(282,72,"4");
 outtextxy(312,72,"5");
 outtextxy(342,72,"6");
 outtextxy(372,72,"7");
 outtextxy(402,72,"8");

 //------------------------//
 outtextxy(192,101,"9");
 outtextxy(212,101,"10");
 outtextxy(242,101,"11");
 outtextxy(272,101,"12");
 outtextxy(302,101,"13");
 outtextxy(332,101,"14");
 outtextxy(362,101,"15");
 outtextxy(392,101,"16");
 //--------------------------//
 outtextxy(185,131,"17");
 outtextxy(212,131,"18");
 outtextxy(242,131,"19");
 outtextxy(272,131,"20");
 outtextxy(302,131,"21");
 outtextxy(332,131,"22");
 outtextxy(362,131,"23");
 outtextxy(392,131,"24");
//--------------------------//
 outtextxy(185,161,"25");
 outtextxy(212,161,"26");
 outtextxy(242,161,"27");
 outtextxy(272,161,"28");
 outtextxy(302,161,"29");
 outtextxy(332,161,"30");
 outtextxy(362,161,"31");
 outtextxy(392,161,"32");

//-------------------------------//
 settextstyle(0,0,1);
 outtextxy(185,190,"33");
 outtextxy(212,190,"34");
 outtextxy(242,190,"35");
 outtextxy(272,190,"36");
 outtextxy(302,190,"37");
 outtextxy(332,190,"38");
 outtextxy(362,190,"39");
 outtextxy(392,191,"40");
//-------------------------------//


 outtextxy(185,221,"41");
outtextxy(212,221,"42");
 outtextxy(242,221,"43");
 outtextxy(272,221,"44");
 outtextxy(302,221,"45");
 outtextxy(332,221,"46");
 outtextxy(362,221,"47");
 outtextxy(392,221,"48");
//------------------------------//
outtextxy(185,251,"49");
outtextxy(212,251,"50");
 outtextxy(242,251,"51");
 outtextxy(272,251,"52");
 outtextxy(302,251,"53");
 outtextxy(332,251,"54");
 outtextxy(362,251,"55");
 outtextxy(392,251,"56");
//------------------------------//
 outtextxy(185,281,"57");
 outtextxy(212,281,"58");
 outtextxy(242,281,"59");
 outtextxy(272,281,"60");
 outtextxy(302,281,"61");
 outtextxy(332,281,"62");
 outtextxy(362,281,"63");
 outtextxy(392,281,"64");
//-------------------------------//

}

void fgame(int* a,int* b,int* c,int* d,int* e)
{
int v[20];
e[4]=1029;
outtextxy(50,295,"Enter input");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t";
for(int i=0;i<2;i++)
 {
 cin>>v[i];
 for(int j=0;j<5;j++)
 if(v[i]==a[j]||v[i]==b[j]||v[i]==c[j]||v[i]==d[j]||v[i]==e[j])
   {
  /* cout<<"v[i]="<<v[i];
   cout<<"\na[j]="<<a[j];
   cout<<"\nb[j]="<<b[j];
   cout<<"\nc[j]="<<c[j];
   cout<<"\ne[j]="<<e[0];
   cout<<"\ne[j]="<<e[1];
   cout<<"\ne[j]="<<e[2];
   cout<<"\ne[j]="<<e[3];
   cout<<"\ne[j]="<<e[4];
  */    draw(v[i]);
    }
 }
}

void game(int* a,int* b,int* c,int* d,int* e)
{
cleardevice();
head();

 setbkcolor(BROWN);

 setcolor(YELLOW);
 lines();
 gotoxy(35,2);
 cout<<"BATTLESHIPS";
display();
fgame(a,b,c,d,e);
delay(2000);
}
int* sort(int x,int* v)
{
int i, key, j;
    for (i = 1; i < x; i++)
    {
	key = v[i];
	j = i - 1;

	/* Move elements of arr[0..i-1], that are
	greater than key, to one position ahead
	of their current position */
	while (j >= 0 && v[j] > key)
	{
	    v[j + 1] = v[j];
	    j = j - 1;
	}
	v[j + 1] = key;
    }
return v;
}
int constraint(int* a,int v)
{
int f,t=v-1;
for(int i=0;i<t;i++)
{
if((*(a+i+1)%8)==(*(a+i)+1)||(*(a+i+1)==*(a+i)+8))
  f=1;
else
{
f=0;
break;
}
}
if(f==1)
return(1);
else
return(0);

}
void input()
{
int *m,k,a[5],b[5],c[5],d[5],e[5],x,y;

outtextxy(50,295,"Enter input for CRUISER(5)");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t";
state:
for(int i=0;i<5;i++)
 cin>>a[i];
m=sort(5,a);
//for(i=0;i<5;i++)
//cout<<*(m+i);
k=constraint(m,5);
if(k==1)
{
drawcircle(5,m);
outtextxy(50,325,"Enter input for (4)");
cout<<"\n";
for( i=0;i<4;i++)
{   cout<<"\t\t";
cin>>b[i];
}
m=sort(4,b);
k=constraint(m,4);
if(k==1)
{
drawcircle(4,m);
outtextxy(50,355,"Enter input for (3)");
cout<<"\n\t\t";
for(i=0;i<3;i++)
   cin>>c[i];
m=sort(3,c);
k=constraint(m,3);
if(k==1)
{
drawcircle(3,m);
outtextxy(50,390,"Enter input for (3)");
cout<<"\n\t\t";
for(i=0;i<3;i++)
   cin>>d[i];
m=sort(3,d);
k=constraint(m,3);
if(k==1)
{
drawcircle(3,m);
outtextxy(50,420,"Enter input for CRUISER(2)");
cout<<"\n\t\t";
for(i=0;i<2;i++)
  cin>>e[i];
m=sort(2,e);
k=constraint(m,2);
if(k==1)
{
drawcircle(2,m);
	 delay(2000);
	 game(a,b,c,d,e);

}
else
{
 cleardevice();
 setbkcolor(BROWN);
 setcolor(YELLOW);
 lines();
 gotoxy(35,2);
 cout<<"BATTLESHIPS";
 display();
 input();
}
}
else
{
 cleardevice();
 setbkcolor(BROWN);
 setcolor(YELLOW);
 lines();
 gotoxy(35,2);
 cout<<"BATTLESHIPS";
 display();
 input();
}
}
else
{
 cleardevice();
 setbkcolor(BROWN);
 setcolor(YELLOW);
 lines();
 gotoxy(35,2);
 cout<<"BATTLESHIPS";
 display();
 input();
}
}
else
{
 cleardevice();
 setbkcolor(BROWN);
 setcolor(YELLOW);
 lines();
 gotoxy(35,2);
 cout<<"BATTLESHIPS";
 display();
 input();
}
}

else
{
 cleardevice();
 setbkcolor(BROWN);
 setcolor(YELLOW);
 lines();
 gotoxy(35,2);
 cout<<"BATTLESHIPS";
 display();
 input();
}
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
 input();
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
closegraph();
}
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