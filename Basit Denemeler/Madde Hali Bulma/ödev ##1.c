#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int nufus=70000000;
	printf("2000 yýlý nüfusu : %d þeklindedir ve 10 yýl beklenen nüfuslar þu þekildedir:",nufus);
	int nufus1 = ((nufus * 2.5) / 100) + nufus;
	printf("\n2001 yýlý nüfusu : %d", nufus1);
	int nufus2 = ((nufus1 * 2.5) / 100) + nufus1;
	printf("\n2002 yýlý nüfusu : %d", nufus2);
	int nufus3 = ((nufus2 * 2.5) / 100) + nufus2;
	printf("\n2003 yýlý nüfusu : %d", nufus3);
	int nufus4 = ((nufus3 * 2.5) / 100) + nufus3;
	printf("\n2004 yýlý nüfusu : %d", nufus4);
	int nufus5 = ((nufus4 * 2.5) / 100) + nufus4;
	printf("\n2005 yýlý nüfusu : %d", nufus5);
	int nufus6 = ((nufus5 * 2.5) / 100) + nufus5;
	printf("\n2006 yýlý nüfusu : %d", nufus6);
	int nufus7 = ((nufus6 * 2.5) / 100) + nufus6;
	printf("\n2007 yýlý nüfusu : %d", nufus7);
	int nufus8 = ((nufus7 * 2.5) / 100) + nufus7;
	printf("\n2008 yýlý nüfusu : %d",nufus8);
	int nufus9 = ((nufus8 * 2.5) / 100) + nufus8;
	printf("\n2009 yýlý nüfusu : %d", nufus9);
	int nufus10 = ((nufus9 * 2.5) / 100) + nufus9;
	printf("\n2010 yýlý nüfusu : %d", nufus10);
	getch();
	
}
