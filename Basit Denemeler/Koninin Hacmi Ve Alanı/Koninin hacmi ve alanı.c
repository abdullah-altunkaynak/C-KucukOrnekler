#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main ()
{
	setlocale(LC_ALL , "Turkish");
	int h , r ;
	int pi = 3 ;
	float hacim , alan , a;
	printf("L�tfen koninin yar��ap�n� ve y�ksekli�ini giriniz : ");
	scanf("%d %d", &r , &h);
	 hacim =  (pi*r*r*h) / 3 ;
	 a = (r*r) + (h*h);
	 a = sqrt(a);
	 alan = pi * r * (r+a);
	 printf("Koninin hacmi = %f \n Koninin alan� = %f" , hacim , alan);
	 getch();
}
