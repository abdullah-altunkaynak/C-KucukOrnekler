#include <stdio.h>
#include <stdlib.h>

struct liste
{
	int veri;
	struct liste *sonraki;
};

 int main()
{
	struct liste* ilkdugum = NULL;
	
	ilkdugum = (struct liste*)malloc(sizeof(struct liste));
	struct liste* sonrakidugum = (struct liste*)malloc(sizeof(struct liste));
	
	ilkdugum->veri = 52;
	ilkdugum->sonraki= sonrakidugum;
	
	sonrakidugum->veri = 78;
	sonrakidugum->sonraki = NULL;
	
	printf("ilk düðüm verisi: %d \n sonraki düðüm verisi: %d", ilkdugum->veri, sonrakidugum->veri);
	return 0;
}
