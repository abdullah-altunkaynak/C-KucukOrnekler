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
	printf("Akl�mdan bir say� tuttum bil bakal�m ka� ");
	scanf("%d", &tahmin);
	while(tahmin!=tutulan)
	{
		if(tahmin<tutulan)
		{
			printf("daha b�y�k say� tahmin etmelisin");
			scanf("%d", &tahmin);
		}
		if(tahmin>tutulan)
		{
			printf("daha k���k say� tahmin etmelisin");
			scanf("%d", &tahmin);
		}
		if(tahmin==tutulan)
		{
			printf("tebrikler %d say�s�n� bildiniz", tutulan);
		}
	}
	getch();
}
