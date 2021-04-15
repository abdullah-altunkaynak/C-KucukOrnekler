#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

typedef struct n
{
	int data;
	struct n *next;
}node;

node *root;
node *iter;

void Insert()
{
	if(root != NULL)
	{
		iter->next = (node *)malloc(sizeof(node));
		iter = iter->next;
		printf("Deðer giriniz: "); scanf("%d", &iter->data);
		iter->next = NULL;
		printf("Deðer eklendi !\n\n");
	}
	else
	{
		root = (node *)malloc(sizeof(node));
		printf("Deðer giriniz: "); scanf("%d", &root->data);
		root->next = NULL;
		iter = root;
		printf("Deðer eklendi !\n\n");
	}
}

node *Search(int wanted)
{
	iter = root;
	while(iter->next != NULL)
	{
		if(iter->data == wanted)
			break;
		iter = iter->next;	
	}
	if(iter->data != wanted)
		return NULL;
	return iter;
}

void Go_End()
{
	while(iter->next != NULL)
		iter = iter->next;
}

void Delete()
{
	int wanted;
	printf("Aranacak deðer: "); scanf("%d", &wanted);
	if(Search(wanted) != NULL)
	{
		if(iter == root)
		{
			iter = iter->next;
			root->next = NULL;
			free(root);
			root = iter;
			Go_End();
			printf("Baþarýyla silindi !\n\n");
		}
		else
		{
			node *temp = root;
			while(temp->next != iter)
				temp = temp->next;
			temp->next = iter->next;
			iter->next = NULL;
			free(iter);
			Go_End();
			printf("Baþarýyla silindi !\n\n");
		}
	}
	else
		printf("Silinecek deðer bulunamadý !\n\n");
}

void Display()
{
	iter = root; int a = 1;
	while(iter->next != NULL)
	{
		printf("%d.Eleman: %d\n", a++, iter->data);
		iter = iter->next;
	}
	printf("%d.Eleman: %d\n", a++, iter->data);
	Go_End();
}

int main()
{	
	setlocale(LC_ALL, "Turkish");
	root = NULL;
	int selection; int wanted;
	do
	{
		printf("Ekle[1]\nSil[2]\nAra[3]\nGöster[4]\nÇýkýþ[5]\nSeçim: ");
		selection = getch() - '0';
		printf("%d\n", selection);
		switch(selection)
		{
			case 1:
				Insert();
				break;
			case 2:
				Delete();
				break;
			case 3:
				printf("Aranacak deðer: "); scanf("%d", &wanted);
				if(Search(wanted) != NULL)
					printf("Aranan deðer bulundu !\n\n");
				else
					printf("Aranan deðer bulunamadý !\n\n");
				break;
			case 4:
				Display();
				break;
			case 5:
				printf("Çýkýldý...");
				break;
			default:
				printf("Seçim yanlýþ !\n\n");
				break;
		}
	}while(selection != 5);
	return 0;
}
