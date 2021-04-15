#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int nlen, i, j, k, a = 2, b = 1;
	char isim[20];
	printf("Ýsminizi Giriniz: ");
	gets(isim);
	nlen = strlen(isim);
	system("CLS");      
	printf("\n\n\n\n\n\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("\t\t\t\t\t");
		if(i == 4)
			a = 2;
		else if(i == 1 || i == 3)
			a = 1;
		else if(i == 2)
			a = 0;
		if(i == 1 || i == 3)
			b = 3;
		else if(i == 2)
			b = 5;
		else if(i == 4)
			b = 1;
		for(j = 0; j < a; j++)
		{
			for(k = 0; k < nlen; k++)
				printf(" ");
		}
		printf("%s", isim);
		for(j = 0; j < b; j++)
		{
			for(k = 0; k < nlen; k++)
				printf(" ");
		}
		printf("%s", isim);
		printf("\n\n");
	}
	getch();
}
