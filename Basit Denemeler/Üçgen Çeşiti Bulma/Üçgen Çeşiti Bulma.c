#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main ()
{
	setlocale(LC_ALL , "Turkish");
	int a,b,c ;
	printf("L�tfen ��genin kenar uzunluklar�n� aralar�nda bo�luk olacak �ekilde giriniz :");
	scanf("%d %d %d" , &a , &b , &c);
	if( a != b && b != c )
	{
		printf(" \n �e�itkenar ��gendir");
	}
	else if(a == b && b == c)
	{
		printf(" \n E�kenar ��gendir");
	}
	else
	{
		printf(" \n �kizkenar ��gendir");
	}
}
