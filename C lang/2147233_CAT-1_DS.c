#include<stdio.h>
#include<conio.h>
#define MAX 50
struct arr_data
{
	int data;
	int linkIndex;
};


 void display_arr(struct arr_data ad[]);

 int main()
 {    
    
 	struct arr_data ad[10];
 	int ch,i;
 	do{
 		system("cls");
 		printf("\n1.Generate Array:"
		 );
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
			
			
			
 		
 		
 		default:
 			printf("\nInvalid choice:");

 		}
 	}while(1);
 	return 1;
 			
 }
 
 void display_arr(struct arr_data ad[])
 {
 	int i;
 	for (i=0; i<10 ; i++)
 		printf("\nad[%d] \t %d \t %d",i,ad[i].data,ad[i].linkIndex);
 		return;
 }
 
