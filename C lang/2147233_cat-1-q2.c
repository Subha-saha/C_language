#include<stdio.h>
#include<conio.h>
#define MAX 50
struct arr_data
{
	int data;
	int linkIndex;
};
struct node{
	int val;
	struct node *next;
	
	
};
struct node*head;
 void display_arr(struct arr_data ad[]);
 void insert();
 void delete();
 void display();
 int main()
 {    
    
 	struct arr_data ad[10];
 	int ch,i;
 	do{
 		system("cls");
 		printf("\n1.Generate Array:\n2.Insert\n3.POP");
 		printf("Enetr your choice:\n");
 		printf("\nEnter a key ---to exit\n");
 		
	 
	 	scanf("%d",&ch);
		switch(ch)
 		{
 			case 1:
 		    ad[0] . data = 38; ad[0].linkIndex = 9;
 		    ad[1] . data = 9; ad[1].linkIndex = 3;
 		    ad[2] . data = 68; ad[2].linkIndex = 6;
 		    ad[3] . data = 48; ad[3].linkIndex = 7;
			ad[4] . data = 18; ad[4].linkIndex = 1;
			ad[5] . data = 58; ad[5].linkIndex = -1;	  
			ad[6] . data = 68; ad[6].linkIndex = 0;
			ad[7] . data = 78; ad[7].linkIndex = 8;
			ad[8] . data = 88; ad[8].linkIndex = 5;
			ad[9] . data = 90; ad[9].linkIndex = -1;
			display_arr(ad);
			getch();
 		break;
			
			case 2:
				{
				insert();
				break;
			}
			case 3:
				{
					delete();
				}
			case 4:
			{
				display();
				}	
			
 		
 		
 		default:
 			exit(1);

 		}
 	}while(4);
 	return 1;
 			
 }
 
 void display_arr(struct arr_data ad[])
 {
 	int i;
 	for (i=0; i<10 ; i++)
 		printf("\nad[%d] \t %d \t %d",i,ad[i].data,ad[i].linkIndex);
 		return;
 }
 void insert()
 {  	//Function for Insertion of value is done	
 
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));	     //initializing the pointer for the node in linked list  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        ptr->data_arr = ad;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted");  
    }  
      
}  
 void delete()
 {
 		 
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }  

 }
 void display()
 {
 	struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("XX-----------Nothing to print-----------XX");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }

 }
