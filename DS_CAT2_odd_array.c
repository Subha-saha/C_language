/*
@uthor: Subhadip Saha, 2147233, 3MCA B
DATA STRUCTURES CAT-2-ODD-ARRAY
*/
#include<stdio.h>		//Header Files
#include<stdlib.h>

void input_arr(int arr[],int n);
void display(int arr[],int n);
void new_ar(int arr[],int new_arr[],int n);				//Function Prototype
void sort_arr();

int main()						//Main function
{
	int arr[20];			//array to store polynomials
	int new_arr[20];		//array to store new elements whose sum is greater than 10
	int n,s;
	printf("\nEnter the size of array:\n");
	scanf("%d",&n);
	int ch;
	while(1)
	{
		printf("\n**************************WELCOME**************************\n");			//Menu for user
		printf("\n1.Input elements in array\n");
		printf("\n2. Create new array\n");
		printf("\n3.Sort new array\n");
		printf("\n4.Exit\n");
		
		printf("\nENTER YOUR CHOICE\n");				//user entry of a user
		scanf("%d",&ch);
		switch (ch)
		{
			case 1: input_arr(arr,n);
					break;
			case 2: new_ar(arr,new_arr,n);
					break;
			case 3: sort_arr(new_arr,s);
					break;
			case 4: printf("\n\t THANK YOU\n\t HAVE A GOOD DAY\n");
					exit(1);
					break;
			default:printf("\nENTER A VALID CHOICE\n");
		}
	}
	
}

void input_arr(int arr[],int n) 	// user input of a user
{
	int i;
	printf("\nENTER YOUR POLYNOMIALS\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", & arr[i]);
	}
	
	display(arr,n);				//Displaying polynomials
}

void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d|",  arr[i]);
		if(i%2!=0)
		{
			printf("\t->");
		}
	}
}
void new_ar(int arr[],int new_arr[],int n)		//Creating new array with Sum greater than 10
{
		new_arr[20];
		int i, sum=0, f=1;
		int in=0;
		for(i=0;i<=n;i=i+2)
		{
			sum=arr[i]+arr[i+1];
			printf("%d\t",sum);
			if(sum>10)
			{
				new_arr[in]=sum;
				f++;
				in++;
			}
		}
		printf("\nLENGTH OF NEW ARRAY IS%d:",f);
		
		
		
		
}
void sort_arr(int new_arr[], int s)
{
	int i,j;
	int temp=0;
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s-1;j++)
		{
			if(new_arr[i]>new_arr[j])
			{
				temp=new_arr[j];
				new_arr[j]=new_arr[i];
				new_arr[i]=temp;
			}
		}
		
	}
	
	printf("\n\t**********VALUES AFTER SORTING***************\n");
	for(i=0;i<s;i++)
	{
		printf("%d",new_arr[i]);
	}
	
}
