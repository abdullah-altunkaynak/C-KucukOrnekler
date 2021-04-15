#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1,sayi2;
	char harf = 'e';
	gel:
	printf("Lütfen iki sayý giriniz : ");
	scanf("%d %d", &sayi1, &sayi2);
	int toplam = sayi1 + sayi2;
	printf("Toplam = %d\n Tekrar yapmak için 'e' ye basýnýz", toplam);
	scanf("%s", &harf);
	if(harf == 'e' || harf == 'E')
	{
		goto gel;
	}
	else
	getch();
}
