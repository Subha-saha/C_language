#include <stdio.h>    
     
int main()    
{         
    int arr[5],i;  
	printf("enter the  integers:");
	//taking input 
	 for(i=0;i<6;i++)
	 {
	 	scanf("%d",&arr[i]); 
	 }    
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Initialize min with first element of array.    
    int min = arr[0];    
        
    //Loop through the array    
    for ( i = 0; i < length; i++) {     
        //Compare elements of array with min    
       if(arr[i] < min)    
           min = arr[i];    
    }      
    printf("Smallest element present in given array: %d At position:%d",min,arr[min]);    
    return 0;    
}    
