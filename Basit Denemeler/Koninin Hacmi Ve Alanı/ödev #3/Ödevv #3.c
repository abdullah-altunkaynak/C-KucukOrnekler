#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL , "Turkish");
	int a , b ,c, x1, x2;
	printf("Denklemin \"a b c\" deðerlerini giriniz: ");
	scanf("%d %d %d", &a, &b, &c);
	int delta = deltahesap(a, b, c);
	if(delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("\nDenklemin iki farklý kökü vardýr x1 = %d, x2 = %d", x1, x2);
	}
	else if(delta == 0)
	{
		x1 = -b / (2 * a);
		printf("\nDenklemin çakýþýk iki kökü vardýr x1 = x2 = %d", x1);
	}
	else
		printf("\nDenklemin reel kökü yoktur");
	getch();
}

int deltahesap (int a , int b , int c)
{
	int don = pow(b, 2) - 4 * a * c;
	return don;	
}
