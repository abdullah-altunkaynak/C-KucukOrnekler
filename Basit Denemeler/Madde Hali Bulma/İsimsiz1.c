#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "Turkish");
	char a[] = {"dene.txt"};
	char b[15];
	FILE *ptr = fopen(a, "r");
	fgets(b, 20, ptr);
	puts(b);
	fclose(ptr);
}
