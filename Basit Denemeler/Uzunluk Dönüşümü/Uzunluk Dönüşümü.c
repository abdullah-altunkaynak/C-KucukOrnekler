#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL , "Turkish");
	double metre;
	gel:
	printf("Lütfen metre cinsinden bir deðer giriniz :");
	scanf("%lf" , &metre );
	gell:
	printf("[1]km\n[2]cm\n[3]mm\n Hangi dönüþümü yapmak isterseniz seçiniz :");
	int girilen;	
	scanf("%d" , &girilen);
	switch(girilen)
	{
		
		case 1 :
			 metre = metre / 100;		
		printf("%lf : km cinsinden deðeriniz", metre);
		break;
		
		case 2 :
			metre *= 100;
			printf("%lf : cm cinsinden deðeriniz", metre);
		break; 
		
		case 3 :
		metre *= 1000;
		printf("%lf : mm cinsinden deðeriniz", metre);
		break;
		
		default :
			printf("lütfen geçerli bir sayý giriniz \n");
			goto gell;
		break;	
		 		 		
	}
	printf("\n");
	goto gel;
	
	getch();
}
