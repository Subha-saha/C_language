/*
@uthor: Subhadip Saha, 2147233, 3MCA B
DATA STRUCTURES CAT-2-EVEN-LINKED LIST
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	int regno;
	int score;
	char name[10];
	struct node* next;
};
struct node *head;





int random()
{
	return rand()%100;
}


int createnode(int roll,int score,char name[10])
{
	
		struct node* newnode = malloc(sizeof(struct node));
		if(newnode==NULL)
		{
			printf("failed");
		}
		else
		{
			strcpy((newnode->name),name);
			newnode->regno = roll;
			newnode->score = score;
		}
		newnode->next = head;
		head = newnode;
	
	
	return 0;
}

int display()
{

		struct node *ptr;
		printf("\n=================================");
		printf("\nName\tReg No\tScore");
		printf("\n=================================");
		while(ptr!=NULL)
		{
			printf("\n%s\t%d\t%d",ptr->name,ptr->regno,ptr->score);
			ptr=ptr->next;
		}
		printf("\n=================================");
	
	
	
}

int sorter()
{
	return 0;
}

int main(void)
{
	int size,i;
	char name[10];
	printf("\n=================================");
	printf("\nEnter the number of students");
	if(scanf("%d",&size))
	{
		for(i=0;i<size;i++)
		{
			printf("\nEnter the student name");
			scanf("%s",name);
			createnode(random()+20000,random(),name);
		}
		display();
	}
	else
	{
		printf("\nWrong size");
	}
	
	return(0);
}
