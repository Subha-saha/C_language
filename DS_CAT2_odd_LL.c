/*
@uthor: Subhadip Saha, 2147233, 3MCA B
DATA STRUCTURES CAT-2 ODD-LINKED LIST

*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	int exp;
	struct node *next;
};
struct node* head;

int createnode(int data,int exp)
{
	struct node* newnode = malloc(sizeof(struct node));
	if(newnode!=NULL)
	{
		newnode->data =data;
		newnode->exp = exp;
	}
	newnode->next = head;
	head = newnode;
}

int random()
{
	return rand()%100;
}

int display()
{
	struct node *ptr;
	printf("\n========================\n");
	while(ptr!=NULL)
	{
		printf("|%d||%d|",ptr->data,ptr->exp);
		printf("-->");
		ptr=ptr->next;
	}
	printf("NULL");
	printf("\n========================");
}



int main(void)
{
	int size,i,data;
	printf("\n========================");
	printf("\nEnter the size");
	scanf("%d",&size);
	printf("\n========================");
	for(i=0;i<size;i++)
	{
		printf("\n========================");
		printf("\nEnter data for degree %d",i);
		scanf("%d",&data);
		createnode(data,i);
	}
	display();
	return 0;
}
