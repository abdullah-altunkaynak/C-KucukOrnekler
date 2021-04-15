#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	/*Kontrol Oparatörleri:
	1-)Eþitmi --> ==
	2-)Eþitdeðilmi --> !=
	3-)Büyükmü --> >
	4-)Küçükmü --> <
	5-)Büyükeþitmi >=
	6-)Küçükeþitmi <=
	7-)Ve --> &&
	8-)Veya --> || 	
	Goto Yapýsý: Oraya Git anlamýna gelir
	gel:
	
	goto gel;
	*/
	setlocale(LC_ALL, "Turkish");
	int sayi;
	gel:
	printf("Sayý Giriniz: ");
	scanf("%d", &sayi);
	if(sayi % 3 == 0)
	{
		if(sayi % 4 == 0 && sayi % 5 == 0)
		{
			printf("Hem 12'ye Hem 15'e Bölünebilir.");
		}
		else if(sayi % 4 == 0)
		{
			printf("Sadece 12'ye Bölünebilir.");
		}
		else if(sayi % 5 == 0)
		{
			printf("Sadece 15'e Bölünebilir.");
		}
		else
		{
			printf("Olmaz Gardaþým.");		
		}
	}
	else
	{
		printf("Olmaz Gardaþým.");
	}
	printf("\n");
	goto gel;
	getch();
}
