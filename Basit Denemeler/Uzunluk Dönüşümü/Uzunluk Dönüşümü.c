#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL , "Turkish");
	double metre;
	gel:
	printf("L�tfen metre cinsinden bir de�er giriniz :");
	scanf("%lf" , &metre );
	gell:
	printf("[1]km\n[2]cm\n[3]mm\n Hangi d�n���m� yapmak isterseniz se�iniz :");
	int girilen;	
	scanf("%d" , &girilen);
	switch(girilen)
	{
		
		case 1 :
			 metre = metre / 100;		
		printf("%lf : km cinsinden de�eriniz", metre);
		break;
		
		case 2 :
			metre *= 100;
			printf("%lf : cm cinsinden de�eriniz", metre);
		break; 
		
		case 3 :
		metre *= 1000;
		printf("%lf : mm cinsinden de�eriniz", metre);
		break;
		
		default :
			printf("l�tfen ge�erli bir say� giriniz \n");
			goto gell;
		break;	
		 		 		
	}
	printf("\n");
	goto gel;
	
	getch();
}
