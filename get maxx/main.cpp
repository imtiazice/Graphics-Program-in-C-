#include<graphics.h>
#include<conio.h>

main()
{
   int gd = DETECT, gm, max_x;
   char array[100];

   initgraph(&gd,&gm,"C:\\TC\\BGI");

   max_x = getmaxx();

   printf(array, "Maximum X coordinate for current graphics mode and driver = %d.",max_x);
   outtext(array);

   getch();
   closegraph();
   return 0;
}
