#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main ()
{
	setlocale(LC_ALL , "Turkish");
	int a,kare,kup;
	float kk;
	printf("L�tfen bir say� giriniz :");
	scanf("%d" , &a );
	kk = sqrt(a);
	kare = a * a ;
	kup = a * a * a ;
	printf(" karek�k'� = %f \n kare'si = %d \n k�p'� = %d " , kk , kare , kup);
	getch();
}
