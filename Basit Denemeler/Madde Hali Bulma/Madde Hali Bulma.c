#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main ()
{
	setlocale(LC_ALL , "Turkish");
	int a;
	printf("L�tfen S�cakl�k de�erini giriniz :");
	scanf("%d" , &a);
	if ( a >= 100 )
	{
		printf("Madde hali = Gaz");
	}
	else if ( a <= 0)
	{
		printf("Madde hali = Kat�");
	}
	else
	printf("Madde hali = S�v�");
	getch();
	
}
