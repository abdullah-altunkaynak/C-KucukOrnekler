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
		printf("De�er giriniz: "); scanf("%d", &iter->data);
		iter->next = NULL;
		printf("De�er eklendi !\n\n");
	}
	else
	{
		root = (node *)malloc(sizeof(node));
		printf("De�er giriniz: "); scanf("%d", &root->data);
		root->next = NULL;
		iter = root;
		printf("De�er eklendi !\n\n");
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
	printf("Aranacak de�er: "); scanf("%d", &wanted);
	if(Search(wanted) != NULL)
	{
		if(iter == root)
		{
			iter = iter->next;
			root->next = NULL;
			free(root);
			root = iter;
			Go_End();
			printf("Ba�ar�yla silindi !\n\n");
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
			printf("Ba�ar�yla silindi !\n\n");
		}
	}
	else
		printf("Silinecek de�er bulunamad� !\n\n");
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
		printf("Ekle[1]\nSil[2]\nAra[3]\nG�ster[4]\n��k��[5]\nSe�im: ");
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
				printf("Aranacak de�er: "); scanf("%d", &wanted);
				if(Search(wanted) != NULL)
					printf("Aranan de�er bulundu !\n\n");
				else
					printf("Aranan de�er bulunamad� !\n\n");
				break;
			case 4:
				Display();
				break;
			case 5:
				printf("��k�ld�...");
				break;
			default:
				printf("Se�im yanl�� !\n\n");
				break;
		}
	}while(selection != 5);
	return 0;
}
