#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL , "Turkish");
	int x, y, yedek;
	printf("��lem i�in iki say� giriniz:");
	scanf("%d %d", &x, &y);
	yedek = x;
	x += y;
	printf("x += y: %d\n", x);
	x = yedek;
	x -= y;
	printf("x -= y: %d\n", x);
	x = yedek;
	x *= y;
	printf("x *= y: %d\n", x);
	x = yedek;
	x += -y;
	printf("x += -y: %d\n", x);
	x = yedek;
	x -= -y;
	printf("x -= -y: %d\n", x);
	x = yedek;
	x *= -y;
	printf("x *= -y: %d\n", x);	
	getch();
}
