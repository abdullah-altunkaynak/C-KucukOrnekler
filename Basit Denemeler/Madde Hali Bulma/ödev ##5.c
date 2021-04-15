#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi, i, x, a, b, c, d;
	for(i = 1000; i <= 9999 ; i++)
	{
		x=i;
		a = x % 10;
		x = x / 10;
		
		b = x % 10;
		x = x / 10;
		
		c = x % 10;
		x = x / 10;
		
		d = x % 10;
		
		sayi = (a * a * a * a) + (b * b * b * b) + (c * c * c * c) + (d * d * d * d);
		if(sayi == i)
		{
			printf("%d\n", i);
		}		
	}
	getch();
}
