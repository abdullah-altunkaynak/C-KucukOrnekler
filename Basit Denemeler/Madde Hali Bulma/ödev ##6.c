#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int i, j, mukemmel;	
	for ( i=1; i <10000 ; i++) 
	{
		mukemmel = 0;
		for( j=1; j<i; j++)
		{
			if(i%j==0)
			{
				mukemmel = mukemmel + j;
			}
		}
		if(mukemmel == i)
		{
			printf("%d\n",mukemmel );
		}
	}	
	getch();
}
