#include <stdio.h>
#include <locale.h>
#include <conio.h>

 int main()
 {
 	setlocale(LC_ALL , "Turkish");
	 int istenen;
	printf("L�tfen bir say� giriniz :");
	scanf("%d", &istenen);
	if( istenen%2 == 0)
	{
		printf("Say�n�z �ift :)");
	}
	else
    {
    	printf("Say�n�z Tek :(");
	} 
	getch();
 }
