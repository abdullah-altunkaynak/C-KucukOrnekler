#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	float sut;
	int peynir;
	printf("L�tfen �retmek istedi�iniz peynir miktar�n� giriniz :");
	scanf("%d", &peynir);
	sut = peynir * 7.5;
	printf("Gereken s�t miktar� : %2.1f", sut);
	getch();
}
