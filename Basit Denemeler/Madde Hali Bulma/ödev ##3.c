#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
	setlocale(LC_ALL , "Turkish");
	int i , j , k, girilen;
	printf("Lütfen bir sayý giriniz :");
	scanf("%d", &girilen);
	printf("2 \n");
	for( i = 3; i < girilen; i++)
	{
		for( j = 2; j < i; j++)
		{
			k=0;
			if( i % j == 0)
			{
				k=1;
				break;
			}
		}
		if( k == 0)
		{
			printf("%d \n" , i);
		}
	}	
	getch();
}
