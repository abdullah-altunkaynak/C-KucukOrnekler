#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Turkish");
	int tutulan=0,tahmin=0;
	srand(time(NULL));
	tutulan=rand()%100+1;
	printf("Aklýmdan bir sayý tuttum bil bakalým kaç ");
	scanf("%d", &tahmin);
	while(tahmin!=tutulan)
	{
		if(tahmin<tutulan)
		{
			printf("daha büyük sayý tahmin etmelisin");
			scanf("%d", &tahmin);
		}
		if(tahmin>tutulan)
		{
			printf("daha küçük sayý tahmin etmelisin");
			scanf("%d", &tahmin);
		}
		if(tahmin==tutulan)
		{
			printf("tebrikler %d sayýsýný bildiniz", tutulan);
		}
	}
	getch();
}
