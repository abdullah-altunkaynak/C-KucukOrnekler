#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/* girilen �ifreyi 4'l�k tabana d�n��t�r�cez.4'l�k tabana �evirmek i�in say�y� 4 e b�l�p kalanlar� tersten s�ralamal�y�z.Biz 4'l�k tabana
sadece 4 bitlik k�sm�n� �eviricez, buda bizim �ifremizin ��z�l�rl���n� zorla�t�r�cakt�r. */

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sifre_ilk,sifre_son,kalan,bolum;
	printf("L�tfen �ifrenizi giriniz");
	scanf("%d",&sifre_ilk);
	kalan = sifre_ilk % 4; //�ifrelenmi� halinin son rakam�n� bulduk.
	sifre_son = kalan; // �ifrelenmi� haline ekledik birler basama��na
	bolum = sifre_ilk / 4; //�ifrelenmi� halinin 3. rakam�n� bulaca��m�z say�y� bulduk.
	kalan = bolum % 4; // 3. rakam� bulduk.
	sifre_son= sifre_son + (kalan * 10); // 3. rakam� �ifrelenmi� halinin onlar basama��na yazd�k.
	bolum = bolum / 4; // 2. rakam i�in kullanaca��m�z say�.
	kalan = bolum % 4; //2. rakam� bulduk.
	sifre_son = sifre_son + (kalan * 100); // 2. rakam� yazd�k.
	bolum = bolum / 4; // 1. say� i�in kullanaca��m�z say�.
	kalan = bolum % 4;
	sifre_son = sifre_son + (kalan * 1000);
	printf("�ifrelenmi� Son Hal: %d",sifre_son);
	
}
