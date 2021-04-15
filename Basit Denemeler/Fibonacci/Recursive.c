#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int fakt(int a)
{
	static int sonuc = 1;
	printf("aaa");
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi = 0; int sonuc = 0;
	printf("Faktoriyeli Alýnacak Sayý: ");
	scanf("%d", sayi);
	sonuc = fakt(sayi);
	printf("Faktoriyeli: %d", sonuc);
	return 0;
}
