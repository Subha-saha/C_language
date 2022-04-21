//create an array and display its elements

#include <stdio.h>
int main()
{
	int arr[5],i;
	printf("enter the 5 integers:");
	//taking input 
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 printf("Displaying integers:");
	 //printing out the array
	 for(i=0;i<5;i++)
	 {
	 	printf("%d\n",arr[i]);
	 }
  return 0;	 
}
