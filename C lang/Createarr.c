#include <stdio.h>
int main()
{
	int arr[5],i;
	printf("enter the 5 integers:");
	 for(i=0;i<5;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 printf("Displaying integers:");
	 for(i=0;i<5;i++)
	 {
	 	printf("%d\n",arr[i]);
	 }
  return 0;	 
}
