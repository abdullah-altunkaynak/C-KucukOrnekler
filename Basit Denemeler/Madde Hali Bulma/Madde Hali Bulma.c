#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main ()
{
	setlocale(LC_ALL , "Turkish");
	int a;
	printf("Lütfen Sýcaklýk deðerini giriniz :");
	scanf("%d" , &a);
	if ( a >= 100 )
	{
		printf("Madde hali = Gaz");
	}
	else if ( a <= 0)
	{
		printf("Madde hali = Katý");
	}
	else
	printf("Madde hali = Sývý");
	getch();
	
}
