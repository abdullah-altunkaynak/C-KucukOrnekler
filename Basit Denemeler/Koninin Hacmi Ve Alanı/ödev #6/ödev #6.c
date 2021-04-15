#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi, yuzler, onlar, birler;
	printf("Lütfen 3 basamaklý bir sayý giriniz :");
	scanf("%d", &sayi);
	yuzler=sayi/100;
    sayi=sayi-(yuzler*100);
    onlar=sayi/10;
    sayi=sayi-(onlar*10);
    birler=sayi;
    printf("yüzler : %d\nonlar :%d\nbirler :%d", yuzler, onlar, birler);
    getch();
}
