#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int secim,tercih,admin_2_sifre,kullanici_sifre,girilen_sifre,admin_sifre_g,x,y,z;
	char *admin;
	admin = "apo123";
	int admin_sifre = 1234;
	char *kullanici,*admin_2,*girilen_ad,*admin_g;
	printf("Ho�geldiniz L�tfen Se�im yap�n�z \n �ye Ekle[1] \n Giri�[2] :");
	scnaf("%d", &secim);
	switch(secim)
	{
		case 1 :
			printf("�ye Eklemek ��in Admin olman�z gerekmektedir L�tfen giri� yap�n�z \n");
			printf("Admin Kullan�c� Ad� : \n ");
			scanf("%c", &admin_g);
			printf("Admin �ifre :");
			scanf("%d", &admin_sifre_g);
			x = strcmp(admin,admin_g);
			if(x == 0 && admin_sifre == admin_sifre_g)
			{
				printf("Ho�geldin Admin L�tfen Ekleme Tipini Se�iniz : \n Admin Ekle[1] \n Normal �ye Ekle[2] ");
				scanf("%d", &tercih);
				switch(tercih)
				{
					case 1 :
						printf("Yeni Adminin Kullan�c� Ad�n� Giriniz : \n");
						scanf("%c", &admin_2);
						printf("Yeni Adminin �ifresini Giriniz(��FRE 4 HANEL� OLMALIDIR) :");
						scanf("%d", &admin_2_sifre);
						if(admin_2_sifre <= 9999 && admin_2_sifre >= 1000)
							printf("Yeni Admin Ba�ar�l� Bir �ekilde Olu�turulmu�tur.. \n Ho�geldiniz Bay %c", admin_2);
						else
						{
							printf("L�tfen Ge�erli �ifre Giriniz !!");
						}
						break;
					case 2 :
						printf("Yeni Kullan�c� Ad�n� Giriniz : \n");
						scanf("%c", &kullanici);
						printf("Yeni Kullan�c�n�n �ifresini Giriniz(��FRE 4 HANEL� OLMALIDIR) :");
						scanf("%d", &kullanici_sifre);
						if(kullanici_sifre <= 9999 && kullanici_sifre >= 1000)
							printf("Yeni Kullan�c� Ba�ar�l� Bir �ekilde Olu�turulmu�tur.. \n Ho�geldiniz Bay %c", kullanici);
						else
						{
							printf("L�tfen Ge�erli �ifre Giriniz !!");
						}				
				}
			}
			else
			{
				printf("Admin Kullan�c� ad� veya �ifre ge�ersiz !!");
			}
			break;
		case 2 :
			printf("L�tfen Kullan�c� ad� giriniz : \n");
			scanf("%c", girilen_ad);
			printf("L�tfen �ifre giriniz : \n");
			scanf("%d", girilen_sifre);
			y = strcmp(girilen_ad,admin);
			z = strcmp(girilen_ad,kullanici);
			if(y == 0 && girilen_sifre == admin_sifre)
				printf("Ho�geldin Admin..");
			else if (z == 0 && girilen_sifre == kullanici_sifre)
				printf("Ho�geldiniz Bay %c", kullanici);
			else
				printf("L�tfen Ge�erli Bir Kimlik Giriniz !! :(");	
			break;		
	}
	
}
