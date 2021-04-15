#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main ()
{
	setlocale(LC_ALL , "Turkish");
	int a,b,c ;
	printf("Lütfen üçgenin kenar uzunluklarýný aralarýnda boþluk olacak þekilde giriniz :");
	scanf("%d %d %d" , &a , &b , &c);
	if( a != b && b != c )
	{
		printf(" \n Çeþitkenar Üçgendir");
	}
	else if(a == b && b == c)
	{
		printf(" \n Eþkenar Üçgendir");
	}
	else
	{
		printf(" \n Ýkizkenar Üçgendir");
	}
}
