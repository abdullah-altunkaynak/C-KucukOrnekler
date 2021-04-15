#include<stdio.h>
#include<conio.h>
#include<locale.h>

/*  Kütüphanler:
   1-) stdio.h --> standart input output kodlarýný saðlar
   2-) conio.h --> getch kodu gibi programý bekletmeyi saðlar.
   3-) locale.h --> Dil kütüphanesi.
   return --> Geri dönder anlamýna gelir.
   printf --> Output metodudur. Ekrana deðer yazdýrmak için kullanýlýr.
   getch --> Programýn bir tuþa basýlana kadar bekletilmesini saðlamak. 
*/

int main() //main --> ana fonksiyon anlamýna gelir int da fonksiyonunu geriye dönderdiði deðerin cinsini belirtir.
{
	setlocale(LC_ALL, "Turkish"); //--> Türkçe karakter eklemek için kullanýlýr.
	printf("Ýlk Ders ");
/* Deðiþkenler:
	a-) Tam Sayý:tam sayýlarý tutmayý saðlar.
	  1-) short --> Küçük tam sayýlarý tutar. (%d ile okunur)
	  2-) int --> Orta tam sayýlarý tutar. (%d ile okunur)
	  3-) long --> Uzun tam sayýlarý tutar. (%ld ile okunur)
	b-) Ondalýklý Sayýlar:Ondalýklý sayýlarýn tutumunu saðlar.
	  1-) float --> Basamak sayýsý daha küçük olan sayýlarý tutar (7 basamak) (%f ile okunur)
	  2-) double --> Basamak sayýsý daha büyük olan sayýlarý tutar (16 basamak) (%f ile okunur)
	  
	Not: %a.bf a bir sayýdýr ve a sayýsýnýn deðeri virgülden önceki basamak sayýsýný belirler b sayýsý ise virgülden sonraki basamak sayýsýný belirler.
	
	c-) Karakter: Karakter ve metinsel ifadeleri tutmaya yarar.
	  1-) char deðiþken_ismi --> Tek karakterlik ifadeleri tutmaya yarar çünkü deðiþken isminden sonra boyutu verilmemiþtir. (%c ile okunur)
	  2-) char degisken_ismi[karakter_sayisi] --> Metinsel ifadeleri tutmaya yarar karakter sayýsý kadar karakter alýr. (%s ile okunur)
	  
	Not: Ýþaretler:
	  1-) signed: Ýþaretli anlamýna gelir (+,-)
	  2-) unsigned: Ýþaretsiz anlamýna gelir ve deðiþken tipinden önce u harfi gelerek saðlanýr. (+)  
*/
	int a = 5 ; 
	printf(" \n %d  " , a); 
	
	getch();
}
