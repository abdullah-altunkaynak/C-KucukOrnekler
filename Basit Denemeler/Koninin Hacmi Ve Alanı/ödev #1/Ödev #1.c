#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL , "Turkish");
	char a;
	printf("L�tfen bir karakter giriniz :");
	scanf("%c" , &a);
	printf("%c Karakterinin ASCII kodu %d'dir", a, a);		
	getch();
}
