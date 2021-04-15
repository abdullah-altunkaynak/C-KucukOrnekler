#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
/*Döngüler:
    1-)While: Ýken anlamýna gelir.
    while(þart)
    {

    }
    break --> kýr.
    continue --> Devam et.
    2-)Do While --> Ýken yap anlamýna gelir.
    do
    {

    }while(þart);
    3-)For Döngüsü: Ýçin anlamýna gelir.
    for(degisken = sayi; degisken < sinir; degisken++)
    {

    }
    */

int main ()
{
	setlocale(LC_ALL , "Turkish");
	int i , j , k ;
	printf("2 \n");
	for( i = 3; i < 100; i++)
	{
		for( j = 2; j < i; j++)
		{
			k=0;
			if( i % j == 0)
			{
				k=1;
				break;
			}
		}
		if( k == 0)
		{
			printf("%d \n" , i);
		}
	}	
}













