#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	char denklem[100];
	bool kont = false;
	int leng, i, j, iyedek, sayac = 0, a[3], b[3], c[3], aleng = 0, bleng = 0, cleng = 0;
	do
	{
		printf("Ýkinci Dereceden Denklem Giriniz (üs için ^ kullanýnýz): ");
		gets(denklem);
		puts(denklem);
		leng = (int)strlen(denklem);
		for(i = 0; i < leng; i++)
		{
			printf("a ");
			if(denklem[i] == '^')
			{
				if(denklem[i + 1] == '2')
				{
					sayac++;
				}
				else if(denklem[i + 1] > 50)
				{
					sayac = 0;
					break;
				}
			}
		}
		if(sayac > 0)
		{
			kont = true;
			for(i = 0; i < leng; i++)
			{
				if(denklem[i] == 'x')
				{
					iyedek = i - 1;
					if(denklem[i + 1] == '^')
					{
						for(j = 0; iyedek >= 0; j++)
						{
							if(denklem[iyedek] - '0' >= 0 && denklem[iyedek] - '0' <= 9)
								a[j] = denklem[iyedek] - '0';
							iyedek--;
						}
					}
					else
					{
						for(j = 0;  j >= 0; j++)
						{
							printf("b: %d", denklem[iyedek] - '0');
							if(denklem[iyedek] - '0' >= 0 && denklem[iyedek] - '0' <= 9)
								b[j] = denklem[iyedek] - '0';
							else
								break;
							iyedek--;
						}
					}
				}
				else if(i == leng - 1)
				{
					iyedek = i;
					if(denklem[i] - '0' >= 0 && denklem[i] - '0' <= 9)
					{
						for(j = 0; j >= 0; j++)
						{
							if(denklem[iyedek] - '0' >= 0 && denklem[iyedek] - '0' <= 9)
								c[j] = denklem[iyedek] - '0';
							else
								break;
							iyedek--;
						}
					}
					else
					{
						c[0] = 0;
					}
					
				}
			}
			i = 0;
			while(a[i] >= 0 && a[i] <= 9)
			{
				aleng++;
				i++;
			}
			i = 0;
			while(b[i] >= 0 && b[i] <= 9)
			{
				bleng++;
				i++;
			}
			i = 0;
			while(c[i] >= 0 && c[i] <= 9)
			{
				cleng++;
				i++;
			}
			printf("\na: %d, b: %d, c: %d --- %d %d %d", aleng, bleng, cleng, b[0], b[1], b[2]);
		}
	}while(kont == false);
	getch();
}

int deltahesap(int a, int b, int c)
{
	
}
