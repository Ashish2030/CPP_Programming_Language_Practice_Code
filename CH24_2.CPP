/* ==============  Program Description  ============= */
/*   program name : ch24_2.c                          */
/*   draw a interesting picture using line()          */
/* ================================================== */
#include  <graphics.h>
#include  <math.h>
#include <conio.h>

void main(void)
{
    int   driver = DETECT,mode;
    int   x[10],y[10];
    int   x_center = 360, y_center = 180, rad = 100;
    int   i,j;

    initgraph(&driver,&mode,"c:\\tc\\bgi");
    for ( i = 0; i < 10; i++ )
    {
       x[i] =  x_center + rad *  cos(36*i*3.14159/180);
       y[i] =  y_center + rad *  sin(36*i*3.14159/180);
    }
    for ( i = 0; i < 10; i++ )
       for ( j = 0; j < 10; j++ )
	  line(x[i],y[i],x[j],y[j]);
    getch();           /* press any key return to TEXT mode */
    closegraph();
}