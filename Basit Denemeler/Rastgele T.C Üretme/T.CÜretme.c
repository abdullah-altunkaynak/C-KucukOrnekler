#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL ,"Turkish");
	
	int a0; int a1; int a2; int a3; int a4; int a5; int a6; int a7; int a8; int a9; int a10;
	
    srand(time(NULL)); 
    a0=1+rand()%9;
    
    srand(time(NULL)); 
    a1=rand()%9;
    
    srand(time(NULL)); 
    a2=rand()%9;
    
    srand(time(NULL)); 
    a3=rand()%9;
    
    srand(time(NULL)); 
    a4=rand()%9;
    
    srand(time(NULL)); 
    a5=rand()%9;
    
    srand(time(NULL)); 
    a6=rand()%9;
    
    srand(time(NULL)); 
    a7=rand()%9;
    
    srand(time(NULL)); 
    a8=rand()%9;
	
    printf("%d %d %d %d %d %d %d %d %d ",a0,a1,a2,a3,a4,a5,a6,a7,a8);

	
	
}
