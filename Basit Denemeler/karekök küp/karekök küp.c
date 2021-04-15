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
	printf("Lütfen bir sayý giriniz :");
	scanf("%d" , &a );
	kk = sqrt(a);
	kare = a * a ;
	kup = a * a * a ;
	printf(" karekök'ü = %f \n kare'si = %d \n küp'ü = %d " , kk , kare , kup);
	getch();
}
