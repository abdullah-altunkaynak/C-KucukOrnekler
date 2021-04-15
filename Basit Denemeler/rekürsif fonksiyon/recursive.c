#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

/*Global Deðiþken Tanýmlama*/
int *ptrsatir;

int fakt(int n)
{
	if(n > 1)
		return n * fakt(n-1);
	else
		return 1;	
}

int comb(int n, int r)
{
	int a = 0; int b = 0; int c = 0;
	a = fakt(n);
	b = fakt(r);
	c = fakt(n - r);
	return a / (b * c);
}

int pascal(int n, int r)
{
	static int sonuc = 0; int i; static int a = 25; static int boolean = 1;
	if(n < *ptrsatir)
	{
		if(boolean == 1)
		{
			for(i = a; i > 0; i--)
				printf(" ");
			a--;
		}
			
		printf("%d ", comb(n, r));
		if(r == n)
		{
			r = 0;
			printf("\n");
			boolean = 1;
			sonuc = pascal(++n, r);
		}
		else
		{
			r++;
			boolean = 0;
			sonuc = pascal(n, r);	
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	int satir;
	ptrsatir = &satir;
	printf("Kaç satýr ?: ");
	scanf("%d", &satir);
	pascal(0, 0);
	return 0;
}
