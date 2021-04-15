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
	int basamakci = 1;
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
		else
		{
			basamakci = basamakci * 10;
			if( basamakci <= 1000)
			sifre_son = sifre_son + (kalan * basamakci);
		}
	}
	printf("\n Þifrelenmiþ hal: %d", sifre_son);	
}
