#include <graphics.h>
#include <conio.h>

int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   fillellipse(320, 190, 70, 25);

   getch();
   closegraph();
   return 0;
}
