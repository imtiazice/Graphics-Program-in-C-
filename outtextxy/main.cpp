#include<graphics.h>
#include<conio.h>

main()
{
   int gd = DETECT, gm;

   initgraph(&gd,&gm,"C:\\TC\\BGI");

   outtextxy(250, 210, "Outtextxy function");

   getch();
   closegraph();
   return 0;
}
