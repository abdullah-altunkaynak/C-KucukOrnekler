#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL , "Turkish");
	int girilen , toplam ;
	printf("L�tfen bir say� giriniz:");
	scanf("%d" , &girilen);
	girilen = girilen / 2 ;
	toplam = girilen * ( girilen + 1);
	printf(" \n toplam = %d " , toplam );
	
	getch();
		
	
}
