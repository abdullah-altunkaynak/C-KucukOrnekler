#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	/*Kontrol Oparat�rleri:
	1-)E�itmi --> ==
	2-)E�itde�ilmi --> !=
	3-)B�y�km� --> >
	4-)K���km� --> <
	5-)B�y�ke�itmi >=
	6-)K���ke�itmi <=
	7-)Ve --> &&
	8-)Veya --> || 	
	Goto Yap�s�: Oraya Git anlam�na gelir
	gel:
	
	goto gel;
	*/
	setlocale(LC_ALL, "Turkish");
	int sayi;
	gel:
	printf("Say� Giriniz: ");
	scanf("%d", &sayi);
	if(sayi % 3 == 0)
	{
		if(sayi % 4 == 0 && sayi % 5 == 0)
		{
			printf("Hem 12'ye Hem 15'e B�l�nebilir.");
		}
		else if(sayi % 4 == 0)
		{
			printf("Sadece 12'ye B�l�nebilir.");
		}
		else if(sayi % 5 == 0)
		{
			printf("Sadece 15'e B�l�nebilir.");
		}
		else
		{
			printf("Olmaz Garda��m.");		
		}
	}
	else
	{
		printf("Olmaz Garda��m.");
	}
	printf("\n");
	goto gel;
	getch();
}
