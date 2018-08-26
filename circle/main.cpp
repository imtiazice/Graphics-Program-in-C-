#include<conio.h>
#include<graphics.h>
 main()
{

int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\TC\BGI");
circle(320,230,50);
getch();
closegraph();
}
