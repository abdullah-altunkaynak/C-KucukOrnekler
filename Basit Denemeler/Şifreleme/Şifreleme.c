#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/* girilen þifreyi 4'lük tabana dönüþtürücez.4'lük tabana çevirmek için sayýyý 4 e bölüp kalanlarý tersten sýralamalýyýz.Biz 4'lük tabana
sadece 4 bitlik kýsmýný çeviricez, buda bizim þifremizin çözülürlüðünü zorlaþtýrýcaktýr. */

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sifre_ilk,sifre_son,kalan,bolum;
	printf("Lütfen þifrenizi giriniz");
	scanf("%d",&sifre_ilk);
	kalan = sifre_ilk % 4; //þifrelenmiþ halinin son rakamýný bulduk.
	sifre_son = kalan; // þifrelenmiþ haline ekledik birler basamaðýna
	bolum = sifre_ilk / 4; //þifrelenmiþ halinin 3. rakamýný bulacaðýmýz sayýyý bulduk.
	kalan = bolum % 4; // 3. rakamý bulduk.
	sifre_son= sifre_son + (kalan * 10); // 3. rakamý þifrelenmiþ halinin onlar basamaðýna yazdýk.
	bolum = bolum / 4; // 2. rakam için kullanacaðýmýz sayý.
	kalan = bolum % 4; //2. rakamý bulduk.
	sifre_son = sifre_son + (kalan * 100); // 2. rakamý yazdýk.
	bolum = bolum / 4; // 1. sayý için kullanacaðýmýz sayý.
	kalan = bolum % 4;
	sifre_son = sifre_son + (kalan * 1000);
	printf("Þifrelenmiþ Son Hal: %d",sifre_son);
	
}
