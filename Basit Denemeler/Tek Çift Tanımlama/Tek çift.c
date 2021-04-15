#include <stdio.h>
#include <locale.h>
#include <conio.h>

 int main()
 {
 	setlocale(LC_ALL , "Turkish");
	 int istenen;
	printf("Lütfen bir sayý giriniz :");
	scanf("%d", &istenen);
	if( istenen%2 == 0)
	{
		printf("Sayýnýz Çift :)");
	}
	else
    {
    	printf("Sayýnýz Tek :(");
	} 
	getch();
 }
