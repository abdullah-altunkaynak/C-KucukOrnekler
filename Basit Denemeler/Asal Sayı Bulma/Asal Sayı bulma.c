#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
/*D�ng�ler:
    1-)While: �ken anlam�na gelir.
    while(�art)
    {

    }
    break --> k�r.
    continue --> Devam et.
    2-)Do While --> �ken yap anlam�na gelir.
    do
    {

    }while(�art);
    3-)For D�ng�s�: ��in anlam�na gelir.
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













