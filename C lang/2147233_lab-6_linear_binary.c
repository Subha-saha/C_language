/*
@uthor: Subhadip Saha, 2147233, 3MCA B
DATA STRUCTURES LAB 6
Question 01:
Implement and compare searching algorithms (linear, binary, Hashing)
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[100],n, srch_key,i,j,low,high,location,choice;
	void linear_search(int srch_key,int arr[100],int n);
	void binary_search(int srch_key, int arr[100], int n);
	//reading the elements
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the element in the array:\n");
	for(i=1; i<=n ;i++)
	{
		scanf("%d",&arr[i]);
	}
	//searching the key element for linear search
	printf("\nEnter the search key:");
	scanf("%d",&srch_key);
	//choicen for the searchin algorithm
	printf("\n****************************\n");
	printf("1.----Linear search----\n");
	printf("2.----Binary Search----\n");
	printf("******************************\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			linear_search(srch_key , arr , n);
			break;
		case 2:
			binary_search(srch_key,arr,n);
			break;
			
		default:
			exit(0);	
				
	}
	getch();
	return 0;
}
//linear search
void linear_search(int srch_key , int arr[100], int n)
{
	int i, location;
	for(i=1 ; i<=n ; i++)
	{
		if(srch_key == arr[i])
		{
			location = i;
			printf("The location of serach key = %d is %d\n",srch_key,location);
			printf("------------------------------------\n");
		}
	}
}

void binary_search(int srch_key, int arr[100], int n)	
{
	int mid , i , low , high;
	low = 1;
	high= n;
	mid = (low + high)/2;
	i = 1;
	while(srch_key != arr[mid])
	{
		if(srch_key <= arr[mid])
		{
			low = 1;
			high = mid +1;
			mid = (low + high)/2;
		}
		else
		{
		low = mid + 1;
		high= n;
		mid = (low + high)/2;
			
		}	
    }
	printf("-----------------------------\n");
	printf("location = %d\t", mid);
	printf("srch_key=%d\n*********** Number Found!",srch_key);
	printf("*************\n"); 
}
