#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main()
{	
	setlocale(LC_ALL, "Turkish");
	int secim; int i; int a = -1; int gecici1; int gecici2; int toplam;
	char inp[10]; int postfix[20];
	do
	{
		printf("Postfix	to infix[1]\nInfix to postfix[2]\nSeçim: ");
		secim = getch() - '0'; printf("%d\n", secim);
		switch(secim)
		{
			case 1:
				printf("Postfix: "); scanf("%s", inp);
				for(i = 0; i < strlen(inp); i++)
				{
					if(inp[i] < 58 && inp[i] > 47)
						postfix[++a] = inp[i] - '0';
					else
					{
						switch(inp[i])
						{
							case 42:
								gecici1 = postfix[a];
								gecici2 = postfix[--a];
								printf("%d - %d\n", gecici1, gecici2);
								gecici1 *= gecici2;
								postfix[a] = gecici1;
								printf("*: %d\n", postfix[a]);
								break;
							case 43:
								gecici1 = postfix[a];
								gecici2 = postfix[--a];
								printf("%d - %d\n", gecici1, gecici2);
								gecici1 += gecici2;
								postfix[a] = gecici1;
								printf("+: %d\n", postfix[a]);
								break;
							case 45:
								gecici1 = postfix[a];
								gecici2 = postfix[--a];
								printf("%d - %d\n", gecici1, gecici2);
								if(gecici1 >= gecici2)
									gecici1 -= gecici2;
								else
									gecici1 = gecici2 - gecici1;
								postfix[a] = gecici1;
								printf("-: %d\n", postfix[a]);
								break;
							case 47:
								gecici1 = postfix[a];
								gecici2 = postfix[--a];
								printf("%d - %d\n", gecici1, gecici2);
								if(gecici1 >= gecici2)
									gecici1 /= gecici2;
								else
									gecici1 = gecici2 / gecici1;
								postfix[a] = gecici1;
								printf("/: %d\n", postfix[a]);
								break;
						}
					}
				}
				printf("a: %d\n", postfix[a]);
				break;
			case 2:
				
				break;
		}
	}while(secim != 3);
	return 0;
}
