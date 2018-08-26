#include <graphics.h>

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <conio.h>



int main(void)

{

   /* request autodetection */

   int gdriver = DETECT, gmode, errorcode;

   int color, midx, midy;

   char colname[35];



   /* initialize graphics and local variables */

   initgraph(&gdriver, &gmode, "");



   /* read result of initialization */

   errorcode = graphresult();

   if (errorcode != grOk) {  /* an error occurred */

      printf("Graphics error: %s\n", grapherrormsg(errorcode));



      printf("Press any key to halt:");

      getch();

      exit(1);               /* terminate with an error code */

   }



   midx = getmaxx() / 2;

   midy = getmaxy() / 2;

   setcolor(getmaxcolor());



   /* for centering text on the display */

   settextjustify(CENTER_TEXT, CENTER_TEXT);



   /* get the current drawing color */

   color = getcolor();



   /* convert color value into a string */

   itoa(color, colname, 10);

   strcat(colname, " is the current drawing color.");





   /* display a message */

   outtextxy(midx, midy, colname);



   /* clean up */

   getch();

   closegraph();

   return 0;

}
