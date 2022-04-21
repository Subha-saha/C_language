//Finding the largest number in the array and
//printing the largest number and its position

#include <stdio.h>    
     
int main()    
{    
       
    int arr[6],i;      
     	printf("enter the integers:");
	//taking input 
	 for(i=0;i<6;i++)
	 {
	 	scanf("%d",&arr[i]); 
	 }
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Initialize max with first element of array.    
    int max = arr[0];    
        
    //Loop through the array    
    for (i = 0; i < length; i++) {     
        //Compare elements of array with max    
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d at position %i:\n", max,arr[max]);    
    return 0;    
}    
