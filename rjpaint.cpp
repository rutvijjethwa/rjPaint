#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
////////////////////////////////////////PLOTTER
void plotter_ap()
{
outtextxy(5,5,"Motion keys = a,s,d,w....");
outtextxy(5,15,"Plotting keys = A,S,D,W...");
outtextxy(5,25,"Change size of plotter = v , V...");
outtextxy(5,35,"Press c to change colour or f to fix...");
getch();setcolor(BLACK);
outtextxy(5,5,"Motion keys = a,s,d,w....");
outtextxy(5,15,"Plotting keys = A,S,D,W...");
outtextxy(5,25,"Change size of plotter = v , V...");
outtextxy(5,35,"Press c to change colour or f to fix...");
setcolor(WHITE);
int z=100,x=100,c=2,v=0;
circle(z,x,c);char r;
while(1)
{
r=getch();
if(r=='a'){setcolor(BLACK);circle(z,x,c);z-=3;setcolor(WHITE);
circle(z,x,c);}
if(r=='d'){setcolor(BLACK);circle(z,x,c);z+=3;setcolor(WHITE);
circle(z,x,c);}
if(r=='s'){setcolor(BLACK);circle(z,x,c);x+=3;setcolor(WHITE);
circle(z,x,c);}
if(r=='w'){setcolor(BLACK);circle(z,x,c);x-=3;setcolor(WHITE);
circle(z,x,c);}
if(r=='c'|| r=='C'){setcolor(v);v++;
if(v>15)v=0;circle(z,x,c);}
if(r=='A'){z-=1;circle(z,x,c);}
if(r=='D'){z+=1;circle(z,x,c);}
if(r=='S'){x+=1;circle(z,x,c);}
if(r=='W'){x-=1;circle(z,x,c);}
if(r=='v'){setcolor(BLACK);circle(z,x,c);
setcolor(WHITE);c+=3;circle(z,x,c);}
if(r=='V'){setcolor(BLACK);circle(z,x,c);
setcolor(WHITE);c-=3;circle(z,x,c);}
if(r=='f') break;
}
}
//////////////////////////////////////////FRONT PAGE
void rjfront()
{ settextstyle(4,0,6);
randomize();
while(!kbhit())
{ setcolor(random(15));
outtextxy(240,200,"RJpaint");
putpixel(random(640),random(480),random(15));
}
}
//////////////////////////////////////////////////CIRCLE
void circle_roach()
{
outtextxy(5,5,"Motion keys = a,s,d,w....");
outtextxy(5,15,"Change size of circle = x , X...");
outtextxy(5,25,"Press F to fix and colour or f to fix...");
getch();setcolor(BLACK);
outtextxy(5,5,"Motion keys = a,s,d,w....");
outtextxy(5,15,"Change size of circle = x , X...");
outtextxy(5,25,"Press F to fix and colour or f to fix...");
setcolor(WHITE);
int x=50,a=100,b=100;char r;
circle(a,b,x);
while(1)
{r=getch();
if(r=='x'){setcolor(BLACK);circle(a,b,x);setcolor(WHITE);
x+=5;circle(a,b,x);}
if(r=='X'){setcolor(BLACK);circle(a,b,x);setcolor(WHITE);
x-=5;circle(a,b,x);}
if(r=='a'){setcolor(BLACK);circle(a,b,x);setcolor(WHITE);
a-=10;
if(a<6) a=635;circle(a,b,x);}
if(r=='s'){setcolor(BLACK);circle(a,b,x);setcolor(WHITE);
b+=10;
if(b>474) b=5;circle(a,b,x);}
if(r=='d'){setcolor(BLACK);circle(a,b,x);setcolor(WHITE);
a+=10;
if(a>634) a=5;circle(a,b,x);}
if(r=='w'){setcolor(BLACK);circle(a,b,x);setcolor(WHITE);
b-=10;
if(b<6) b=475;circle(a,b,x);}
if(r=='F') //fix and color
{outtextxy(5,5,"Press f to fix...");
outtextxy(5,15,"Press c to change colour...");
outtextxy(5,25,"Press p to change pattern...");
getch();setcolor(BLACK);
outtextxy(5,5,"Press f to fix...");
outtextxy(5,15,"Press c to change colour...");
outtextxy(5,25,"Press p to change pattern...");
setcolor(15);
int q=5,w=2;
setfillstyle(q,w);
floodfill(a,b,15);
while(1)
{ r=getch();
if(r=='f') goto R;
if(r=='p')
{ q+=1;
if(q>10) q=0;
setfillstyle(q,w);floodfill(a,b,15);
}
if(r=='c')
{ w+=1;
if(w>14) w=0;
setfillstyle(q,w);
floodfill(a,b,15);
}
} }
if(r=='f') break;
}R:}
///////////////////////////////////////////////////////LINE
void line_sj()
{
int z=50,x=80,c=50,v=150;char r;
outtextxy(5,5,"Motion keys = a,s,d,w....");
outtextxy(5,15,"Press z,x to change x coodrnates of upper end...");
outtextxy(5,25,"Press t,y to change y coodrnates of upper end...");
outtextxy(5,35,"Press Z,X to change x coodrnates of upper end...");
outtextxy(5,45,"Press T,Y to change y coodrnates of lower end...");
outtextxy(5,55,"Press c to change colour and f to fix...");
getch();setcolor(BLACK);
outtextxy(5,5,"Motion keys = a,s,d,w....");
outtextxy(5,15,"Press z,x to change x coodrnates of upper end...");
outtextxy(5,25,"Press t,y to change y coodrnates of upper end...");
outtextxy(5,35,"Press Z,X to change x coodrnates of upper end...");
outtextxy(5,45,"Press T,Y to change y coodrnates of lower end...");
outtextxy(5,55,"Press c to change colour and f to fix...");
setcolor(WHITE);
line(z,x,c,v);
while(1)
{
r=getch();
if(r=='x'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
z+=2;line(z,x,c,v);}
if(r=='z'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
z-=2;line(z,x,c,v);}
if(r=='y'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
x+=2;line(z,x,c,v);}
if(r=='t'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
x-=2;line(z,x,c,v);}
if(r=='X'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
c+=2;line(z,x,c,v);}
if(r=='Z'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
c-=2;line(z,x,c,v);}
if(r=='Y'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
v+=2;line(z,x,c,v);}
if(r=='T'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
v-=2;line(z,x,c,v);}
if(r=='a'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
z-=1;c-=1;line(z,x,c,v);}
if(r=='s'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
x+=1;v+=1;line(z,x,c,v);}
if(r=='d'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
z+=1;c+=1;line(z,x,c,v);}
if(r=='w'){setcolor(BLACK);line(z,x,c,v);setcolor(WHITE);
x-=1;v-=1;line(z,x,c,v);}
if(r=='f')break;
if(r=='F') //fix and color
{outtextxy(5,5,"Press f to fix...");
outtextxy(5,15,"Press c to change colour...");
getch();setcolor(BLACK);
outtextxy(5,5,"Press f to fix...");
outtextxy(5,15,"Press c to change colour...");
setcolor(15);
int q=5;
setcolor(q);
while(1)
{ r=getch();
if(r=='f') goto R;
if(r=='c')
{ q+=1;
if(q>15) q=0;
setcolor(q);
line(z,x,c,v);
}}
}
}R:}
///////////////////////////////////BOX
void box_mk()
{ //object square,rectangle...
outtextxy(5,5,"Motion keys = a,s,d,w....");
outtextxy(5,15,"To Change position x coordinate = z,Z,c,C...");
outtextxy(5,25,"To Change position y coordinate = x,X,v,V...");
outtextxy(5,35,"Press F to fix and colour or f to fix...");
getch();setcolor(BLACK);
outtextxy(5,5,"Motion keys = a,s,d,w....");
outtextxy(5,15,"To Change position x coordinate = z,Z,c,C...");
outtextxy(5,25,"To Change position y coordinate = x,X,v,V...");
outtextxy(5,35,"Press F to fix and colour or f to fix...");
setcolor(WHITE);
int z=50,x=50,c=100,v=100;
char r;
rectangle(z,x,c,v);
while(1)
{ //////////////resizing and repossitioning.....
r=getch();
if(r=='z'){ setcolor(BLACK);rectangle(z,x,c,v);
z+=10;setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='Z'){ setcolor(BLACK);rectangle(z,x,c,v);
z-=10;setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='x'){setcolor(BLACK);rectangle(z,x,c,v);
x+=10;setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='X'){setcolor(BLACK);rectangle(z,x,c,v);
x-=10;setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='c'){setcolor(BLACK);rectangle(z,x,c,v);
c+=10;setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='C'){setcolor(BLACK);rectangle(z,x,c,v);
c-=10;setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='v'){setcolor(BLACK);rectangle(z,x,c,v);
v+=10;setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='V'){setcolor(BLACK);rectangle(z,x,c,v);
v-=10;setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='a'){setcolor(BLACK);rectangle(z,x,c,v);
z-=10;c-=10;
if(z<0) {z=640-c;c=640;}
setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='s'){setcolor(BLACK);rectangle(z,x,c,v);
x+=10;v+=10;
if(v>481) {v=480-x;x=0;}
setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='d'){setcolor(BLACK);rectangle(z,x,c,v);
z+=10;c+=10;
if(c>641) {c=640-z;z=0;}
setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='w'){ setcolor(BLACK);rectangle(z,x,c,v);
x-=10;v-=10;
if(x<0) {x=480-v;v=480;}
setcolor(WHITE);
rectangle(z,x,c,v);}
if(r=='F') //fix and color
{outtextxy(5,5,"Press f to fix...");
outtextxy(5,15,"Press c to change colour...");
outtextxy(5,25,"Press p to change pattern...");
getch();setcolor(BLACK);
outtextxy(5,5,"Press f to fix...");
outtextxy(5,15,"Press c to change colour...");
outtextxy(5,25,"Press p to change pattern...");
setcolor(15);
int q=5,w=2;
setfillstyle(q,w);
floodfill(z+2,x+2,15);
while(1)
{ r=getch();
if(r=='f') goto R;
if(r=='p')
{ q+=1;
if(q>10) q=0;
setfillstyle(q,w);floodfill(z+2,x+2,15);
}
if(r=='c')
{ w+=1;
if(w>14) w=0;
setfillstyle(q,w);
floodfill(z+2,x+2,15);
}
}}
if(r=='f') break;
}R:}
/////////////////////////////////////
void main()
{
int rj=DETECT,sj;
initgraph(&rj,&sj,"c:\\tc\\bgi");
char r;
rjfront();cleardevice();
setcolor(15);
settextstyle(3,0,1);
outtextxy(570,455,"RJpaint");
settextstyle(0,0,1);
while(1)
{
outtextxy(10,10,"select object..b=box,c=circle,l=line,p=plotter...");
outtextxy(10,20,"f=fix current image as final...");
r=getch();setcolor(BLACK);
outtextxy(10,10,"select object..b=box,c=circle,l=line,p=plotter...");
outtextxy(10,20,"f=fix current image as final...");
setcolor(WHITE);
if(r=='b'|| r=='B') box_mk();
if(r=='c'|| r=='C') circle_roach();
if(r=='l'|| r=='L') line_sj();
if(r=='f'|| r=='F') goto R;
if(r=='p'|| r=='P') plotter_ap();
}
R:
getch();closegraph();restorecrtmode();
}
