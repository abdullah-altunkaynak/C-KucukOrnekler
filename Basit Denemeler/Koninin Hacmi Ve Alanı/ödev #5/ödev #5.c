#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a, b, c, x, y, z;
	int yol1 ,yol2 ,yol3 ,ort;
	printf("!!LÜTFEN ZAMANI SAAT CÝNSÝNDEN GÝRÝNÝZ!!\n");
	printf("\n1. hýz ve zamaný giriniz:");
	scanf("%d %d", &a, &x);
	yol1 = a * x;
	printf("2. hýz ve zamaný giriniz:");
	scanf("%d %d", &b, &y);
	yol2 = b * y;
	printf("3. hýz ve zamaný giriniz:");
	scanf("%d %d", &c, &z);
	yol3 = c * z;
	ort = (yol1 + yol2 + yol3) / (x + y + z);
	printf("Aracýn ortalama sürati : %d",ort);
	getch();
}
