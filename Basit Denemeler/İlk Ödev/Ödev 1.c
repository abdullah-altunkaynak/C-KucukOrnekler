#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

 int main()
 {
 	
 	setlocale(LC_ALL, "Turkish");
 	
      printf("Ýlk Ödev");
      
 	int a = 5 ;
 	float b = 3372.82 ;
 	  
 	  printf("\n %d -- %4.2f", a , b);
 	  
 	char isim[8] = "Abdullah";
 	
 	  printf("\n %s", isim);
 	  
 	char isim_1= 'X';
 	 
 	  printf("\n  %c", isim_1);
 	 
 		   	   	
 	
 	getch();
 	
 }
