#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sifre_ilk,kalan,bolum,i,j;
	int sifre_son = 0;
	int sayac = 0;
	printf("Þifrelenecek Sayý :");
	scanf("%d",&sifre_ilk);
	for (i=0; i<5; i++)
	{
		kalan = sifre_ilk % 4;
		bolum = sifre_ilk / 4;
		sifre_ilk = bolum;
		sayac++;
		if(sayac == 1)
		{
			sifre_son = kalan;
		}
		else if(sayac == 2)
		{
			sifre_son = sifre_son + (kalan * 10);
		}
		else if(sayac == 3)
		{
			sifre_son = sifre_son + (kalan * 100);	
		}
		else if(sayac == 4)
		{
			sifre_son = sifre_son + (kalan * 1000);	
		}
	}
	printf("\n Þifrelenmiþ hal: %d", sifre_son);	
}
