/*
@uthor: Subhadip Saha, 2147233, 3MCA B
DATA STRUCTURES CAT-even-Link List

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	int age;
	int areacode;
	struct node* next;
	char gender[5];
};
struct node* head=NULL;


	
int createnode(int age,char gender[5],int areacode)
{
	struct node* newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\nFailed");
	}
	else
	{
	newnode->age = age;
	strcpy((newnode->gender),gender);
	newnode->areacode = areacode;
	}
	newnode->next = head;
	head = newnode;
}
/*
int count()
{
	
}*/
int display()
{
	struct node* ptr;
	if(ptr==NULL)
	{
		printf("empty");
	}
	else
	{
		printf("\nAge\tGender\tArea Code");
		while(ptr!=NULL)
		{
			printf("\n%d\t%s\t%d",ptr->age,ptr->gender,ptr->areacode);
			ptr=ptr->next;
		}
	}
}
int random()
{
	return rand()%100;
}
int main(void)
{
	int size,i;
	char gender[5];
	printf("\nEnter the size of the array:");
	scanf("%d",&size);
	for(i=0;i<=size;i++)
	{
		if(i%2==0)
		strcpy(gender,"M");
		else
		strcpy(gender,"F");
		createnode(random(),gender,random()+20000);
	}
	display();
	/*count();*/
}
