#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	float sut;
	int peynir;
	printf("Lütfen üretmek istediðiniz peynir miktarýný giriniz :");
	scanf("%d", &peynir);
	sut = peynir * 7.5;
	printf("Gereken süt miktarý : %2.1f", sut);
	getch();
}
