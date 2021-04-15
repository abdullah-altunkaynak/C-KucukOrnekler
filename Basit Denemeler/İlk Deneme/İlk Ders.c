#include<stdio.h>
#include<conio.h>
#include<locale.h>

/*  K�t�phanler:
   1-) stdio.h --> standart input output kodlar�n� sa�lar
   2-) conio.h --> getch kodu gibi program� bekletmeyi sa�lar.
   3-) locale.h --> Dil k�t�phanesi.
   return --> Geri d�nder anlam�na gelir.
   printf --> Output metodudur. Ekrana de�er yazd�rmak i�in kullan�l�r.
   getch --> Program�n bir tu�a bas�lana kadar bekletilmesini sa�lamak. 
*/

int main() //main --> ana fonksiyon anlam�na gelir int da fonksiyonunu geriye d�nderdi�i de�erin cinsini belirtir.
{
	setlocale(LC_ALL, "Turkish"); //--> T�rk�e karakter eklemek i�in kullan�l�r.
	printf("�lk Ders ");
/* De�i�kenler:
	a-) Tam Say�:tam say�lar� tutmay� sa�lar.
	  1-) short --> K���k tam say�lar� tutar. (%d ile okunur)
	  2-) int --> Orta tam say�lar� tutar. (%d ile okunur)
	  3-) long --> Uzun tam say�lar� tutar. (%ld ile okunur)
	b-) Ondal�kl� Say�lar:Ondal�kl� say�lar�n tutumunu sa�lar.
	  1-) float --> Basamak say�s� daha k���k olan say�lar� tutar (7 basamak) (%f ile okunur)
	  2-) double --> Basamak say�s� daha b�y�k olan say�lar� tutar (16 basamak) (%f ile okunur)
	  
	Not: %a.bf a bir say�d�r ve a say�s�n�n de�eri virg�lden �nceki basamak say�s�n� belirler b say�s� ise virg�lden sonraki basamak say�s�n� belirler.
	
	c-) Karakter: Karakter ve metinsel ifadeleri tutmaya yarar.
	  1-) char de�i�ken_ismi --> Tek karakterlik ifadeleri tutmaya yarar ��nk� de�i�ken isminden sonra boyutu verilmemi�tir. (%c ile okunur)
	  2-) char degisken_ismi[karakter_sayisi] --> Metinsel ifadeleri tutmaya yarar karakter say�s� kadar karakter al�r. (%s ile okunur)
	  
	Not: ��aretler:
	  1-) signed: ��aretli anlam�na gelir (+,-)
	  2-) unsigned: ��aretsiz anlam�na gelir ve de�i�ken tipinden �nce u harfi gelerek sa�lan�r. (+)  
*/
	int a = 5 ; 
	printf(" \n %d  " , a); 
	
	getch();
}
