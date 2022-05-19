/*
@uthor: Subhadip Saha, 2147233, 3MCA B
DATA STRUCTURES CAT-1-ODD

*/
#include<stdio.h>
#include<stdlib.h>
#define N 10				//Defining MACROS

int arr[N];					//Globally Initializing array

struct node
{
	int data;
	struct node * next;				//Initializing Structure
}p;
struct node *top=0;

void InputArr();
void DispArr();
void ArrLink();					//functions
void DispLink();


int main()						//main program
{
	int choice;
	while(1)
	{
		printf("\n***********MENU***********");
		printf("\n**************************\n");
		printf("\n1.Input data in array:\n");
		printf("\n2.Display data in array:\n");					//Creating Menu as its a menu driven
		printf("\n3.convert data to linked list:\n");
		printf("\n4.Display data in linked list:\n");
		printf("\n5.Exit\n");
		
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)								//Switch case
		{
			case 1: InputArr();						//calling InputArr to input elements in array
					break;
			case 2: DispArr();						//Calling DispArr to display elements in array
					break;
			case 3: ArrLink();						//calling arrlink to convert array into link
					break;
			case 4: DispLink();
					exit(1);						//Displaying Linked list
					break;
			case 5:	printf("\nTHANK YOU\n");		//For exit
					exit(1);
					break;
			default:printf("INVALID CHOICE");		//Dispalying this on invalid input by user
		}
	}
	return 0;
}


void InputArr()				//Function for user input in array
{
	int i;
	printf("\nEnter your data:\n");
	for(i=0;i<N;i++)
	{
		if(i==0 || i== 2 || i== 6 || i== 9)					//at these places there will be user input of data
		{
			
			scanf("%d",&arr[i]);							//gettiing user input
		}
	}
}


void DispArr()						//Function to display elements of array
{
	int li[]={9,3,4,7,1,-1,0,8,5,-1};	//array of link index
	int i;
	printf("\nArray Elements are:\n");
	for(i=0;i<N;i++)
	{
		printf("\n%d 	 %d		%d	", i, arr[i], li[i]);			//Printing data,array index and link index
	}
}

/*void ArrLink()
{
	int i;
	struct node * newnode;
	newnode=(struct node*) malloc (sizeof(struct node));
	
	for(i=0;i<N;i++)
	{
		if(arr[i]!=0)
		{
			p.data=arr[i];
			newnode=top->data;
			
			top=newnode;
			top->next=0;
			top++;
			
		}
	}
	
	
}*/

void ArrLink()				//Function to convert array data into linked list
{
	int i;
	for(i=0;i<N;i++)			//Loop to find where are the values present 
	{
		if(arr[i]!=0)			//if data in array is not zero then
		{
			struct node * newnode;
			newnode=(struct node*) malloc (sizeof(struct node));		// data not zero then create a new node
			newnode->data=arr[i];					//putting data from top
			newnode->next=top;						//putting next value as null
			top=newnode;						//putting top = newnode	
		}
	}
}

void DispLink()					//function to display linked list
{
	struct node *temp;			//Creating temp value
	temp=top;
	if(top==0)
	{
		printf("\nEmpty Linked List\n");		//If nothing is there then empty list
	}
	
	else
	{
	
	while(temp!=0)				//loop to run till until its null
	{
		printf("->%d",temp->data);		//printing that data
		temp=temp->next;				//taking next node
	}
	}
	
}
