/*Implementation of Stack using array*/

#include <stdio.h>   
int stack[100],i,j,choice=0,n,top=-1;      //stack and other variables are declared
void push();  
void pop();  
void show();  
void main ()  
{  
      
    printf("Enter the number of elements in the stack: ");   
    scanf("%d",&n);  
    printf("________Stack operations using array____________");  
  
printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("Chose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();           //calling the push pop and display function 
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
}   
  
void push ()    //pushing the elememts into the stack
{  
    int val;      
    if (top == n )   
    printf("\n Overflow");   
    else   
    {  
        printf("Enter the value?");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
  
void pop ()     //poping out the elements from the stack
{   
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1; 
}   
void show()         //displaying the elements present in the stack
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}  
