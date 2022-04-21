//implementation of the binary searching
#include<stdio.h>
{
	int search(int arr[] , int x, int n)
	{
		int i;
		for( i=0 ; i< n; i++)
		{
			if(arr[i]==x)
			{
				printf("\n the number is found:");
				return i;
			}
		}
	}
}
 int main()
 {
 	int arr[] , int n , int i;
 	printf("\nEnter the array size:");
 	scanf(%d,&n);
 	for(i=0;i<n;i++)
 	{
 		scanf(%d,&arr[i]);
	 }
	 search(arr[5],7,9);
 return 0;
 }
