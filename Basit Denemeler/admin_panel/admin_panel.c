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
	printf("Hoþgeldiniz Lütfen Seçim yapýnýz \n Üye Ekle[1] \n Giriþ[2] :");
	scnaf("%d", &secim);
	switch(secim)
	{
		case 1 :
			printf("Üye Eklemek Ýçin Admin olmanýz gerekmektedir Lütfen giriþ yapýnýz \n");
			printf("Admin Kullanýcý Adý : \n ");
			scanf("%c", &admin_g);
			printf("Admin Þifre :");
			scanf("%d", &admin_sifre_g);
			x = strcmp(admin,admin_g);
			if(x == 0 && admin_sifre == admin_sifre_g)
			{
				printf("Hoþgeldin Admin Lütfen Ekleme Tipini Seçiniz : \n Admin Ekle[1] \n Normal Üye Ekle[2] ");
				scanf("%d", &tercih);
				switch(tercih)
				{
					case 1 :
						printf("Yeni Adminin Kullanýcý Adýný Giriniz : \n");
						scanf("%c", &admin_2);
						printf("Yeni Adminin Þifresini Giriniz(ÞÝFRE 4 HANELÝ OLMALIDIR) :");
						scanf("%d", &admin_2_sifre);
						if(admin_2_sifre <= 9999 && admin_2_sifre >= 1000)
							printf("Yeni Admin Baþarýlý Bir Þekilde Oluþturulmuþtur.. \n Hoþgeldiniz Bay %c", admin_2);
						else
						{
							printf("Lütfen Geçerli Þifre Giriniz !!");
						}
						break;
					case 2 :
						printf("Yeni Kullanýcý Adýný Giriniz : \n");
						scanf("%c", &kullanici);
						printf("Yeni Kullanýcýnýn Þifresini Giriniz(ÞÝFRE 4 HANELÝ OLMALIDIR) :");
						scanf("%d", &kullanici_sifre);
						if(kullanici_sifre <= 9999 && kullanici_sifre >= 1000)
							printf("Yeni Kullanýcý Baþarýlý Bir Þekilde Oluþturulmuþtur.. \n Hoþgeldiniz Bay %c", kullanici);
						else
						{
							printf("Lütfen Geçerli Þifre Giriniz !!");
						}				
				}
			}
			else
			{
				printf("Admin Kullanýcý adý veya Þifre geçersiz !!");
			}
			break;
		case 2 :
			printf("Lütfen Kullanýcý adý giriniz : \n");
			scanf("%c", girilen_ad);
			printf("Lütfen Þifre giriniz : \n");
			scanf("%d", girilen_sifre);
			y = strcmp(girilen_ad,admin);
			z = strcmp(girilen_ad,kullanici);
			if(y == 0 && girilen_sifre == admin_sifre)
				printf("Hoþgeldin Admin..");
			else if (z == 0 && girilen_sifre == kullanici_sifre)
				printf("Hoþgeldiniz Bay %c", kullanici);
			else
				printf("Lütfen Geçerli Bir Kimlik Giriniz !! :(");	
			break;		
	}
	
}
