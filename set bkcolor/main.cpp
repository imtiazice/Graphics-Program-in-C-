#include<graphics.h>
#include<conio.h>

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   outtext("Press any key to change the background color to GREEN.");
   getch();

   setbkcolor(WHITE);

   getch();
   closegraph();
   return 0;
}
