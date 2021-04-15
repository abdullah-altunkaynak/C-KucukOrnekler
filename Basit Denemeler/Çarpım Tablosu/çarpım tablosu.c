#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL , "Turkish");
    int x,y,z;
    printf("                                                 -Çarpým Tablosu- \n");
    printf("                                            --------------------------- \n");
    for (x=1;x<10;x++)
    {    	
        for (y=1;y<10;y++)
        {
        	if( x > 1 , y==1  )
        		printf("\n \n");
            printf("  %dx%d = %d ",x,y,x*y);
        }
    }
}
