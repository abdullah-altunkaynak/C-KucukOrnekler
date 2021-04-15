#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

typedef struct a
{
	int data;
	struct a *right;
	struct a *left;
}node;

node *root;
node *iter;

void add(int newData)
{
	if(root != NULL)
	{
		iter = root;
		while(iter->data != newData)
		{
			if(newData <= iter->data)
			{
				if(iter->left != NULL)
					iter = iter->left;
				else
				{
					iter->left = (node *)malloc(sizeof(node));
					iter = iter->left;
					iter->data = newData;
					iter->left = NULL;
					iter->right = NULL;	
				}	
			}
			else
			{
				if(iter->right != NULL)
					iter = iter->right;
				else
				{
					iter->right = (node *)malloc(sizeof(node));
					iter = iter->right;
					iter->data = newData;
					iter->left = NULL;
					iter->right = NULL;
				}
			}
		}
	}
	else
	{
		root = (node *)malloc(sizeof(node));
		root->data = newData;
		root->left = NULL;
		root->right = NULL;
		iter = root;
	}
}

void Display(node *L)
{
	if(L != NULL)
	{
		Display(L->left);
			printf("%d, \n\n ", L->data);
		Display(L->right);
		topla(L->data);	
	
	}
}
int toplam = 0;

int topla(int veri)
{
	toplam = veri + toplam;
	printf("toplam = %d \n\n", toplam);
}

int count = 0;

void soru(node *root, int k)
{
	if(root != NULL && count<= k)
	{
		soru(root->right,k);
		count++;
		if(count == k)
			printf("Soru :%d \n\n", root->data);
		soru(root->left,k);	
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	root = NULL;
	add(15);// a
	add(10); // b
	add(20); // d 
	add(8); // e
	add(12); // c 
	add(16); // f 
	add(25); // g
	soru(root,5);
	Display(root);
	return 0;
}
