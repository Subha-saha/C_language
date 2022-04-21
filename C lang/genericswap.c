/*
Program for Generic swap using pointer functions and different function with different workings.
Author:-Subhadip Saha
dt: 27oct 2021
*/
#include <stdio.h>
#include<stdbool.h>
void pointswap(int *num1, int *num2)             //pointer initialisation
{
   int tempnum;

   tempnum = *num1;      
   *num1 = *num2;
   *num2 = tempnum;
}
void swap_log(int *a,int *b)                       //function for arithmetic operation
{
	int sub,sum,mul,div; 
	sum= (*a) + (*b);
	sub=(*a)- (*b);
	mul=(*a )*(*b);
	div=(*a)/(*b);
	  printf("\naddition of the swapped number:%d", sum);
	  printf("\n subtraction of the swapped number:%d",sub);
	  printf("\n multiplication of the swapped number:%d",mul);
	  printf("\n division of the swapped number:%d",div);
}

int main( )
{
   int v1, v2 ;
   bool ab=1, bc=0;
   printf("*****Before swapping*****");
   printf("\nValue of v1 is: ");
   scanf("%d",&v1);
   printf("\nValue of v2 is: ");
   scanf("%d",&v2);
    /*declaration pointer using "&"*/
   /*calling swap function*/
   pointswap( &v1, &v2 );

   printf("\n*****After swapping*****");
   printf("\nValue of v1 is: %d", v1);  
   printf("\nValue of v2 is: %d", v2);
    printf("\n****Arithmetic operation of swapped values:****");
    swap_log(&v1, &v2);                   //calling swap arithmetic operation
    
  return 0;
}
