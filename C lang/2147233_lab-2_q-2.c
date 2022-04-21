/*@author:Subhadip Saha
Data Structures Lab-2
2) Delete multiples of 10 using linked queue
*/


#include<stdio.h>
#include<stdlib.h>
struct node
{
int x;
struct node *next;
};
struct node *front;
struct node *rear;
void enq()       											//function  for enqueue
{  
    struct node *ptr;  
    int item;  
     
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {  
        printf("\nENTER VALUE: \n");  
        scanf("%d",&item);  
        ptr->x = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;  
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else  
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}    
void dq()  														//function for dequeue
{  
    struct node *ptr;  
    if(front == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else  
    {  
        ptr = front;  
        front = front -> next;  
        free(ptr);  
    }  
}  
void tendq()               //function for deleting all the multiples of 10
{
struct node *temp,*prev;
if(front == NULL)
{
printf("\nUNDERFLOW\n");  
        return;
}
temp = front;
while((temp!= NULL)&&((temp->x)%10==0))
{
front = temp->next;
free(temp);
temp =front;
}
while(temp!=NULL)
{
while((temp!=NULL)&&((temp->x)%10!=0))
{
prev = temp;
temp = temp->next;
}
if (temp == NULL)
            return;
 
        prev->next = temp->next;
        free(temp);
        temp = prev->next;
}
printf("\nALL MULTIPLES OF 10 ARE REMOVED FROM QUEUE\n");
}
void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEMPTY QUEUE\n");  
    }  
    else  
    {   printf("\nQUEUE ELEMENTS : \n");  
        while(ptr != NULL)  
        {  
            printf("%d->",ptr->x);  
            ptr = ptr -> next;  
        }  
    }  
}  
void main()
{
int ch;
while(ch != 4){

printf("\nLINKED QUEUE OPERATIONS Q2\n1.ENQUEUE\n2.DEQUEUE\n3.QUEUE DISPLAY\n4.EXIT\n5.DELETE MULTIPLES OF 10\nENTER CHOICE: ");
scanf("%d",&ch);
switch(ch)
{
   case 1:  
            {  
                enq();  
                break;  
            }  
            case 2:  
            {  
                dq();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:  
            {  
                printf("EXITING...");  
                break;  
            }  
            case 5:
            {
            tendq();
            break;
            }
            default:  
            {  
                printf("PLEASE ENTER VALID CHOICE ");  
            }
}
}

}

