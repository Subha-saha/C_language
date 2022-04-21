#include<stdio.h>
#include<conio.h>

int main()
{
   
    int choice, num, i,rev,rem,dup;
    unsigned long int fact;

    while(1)
    {
        printf("1. Palindrome \n");
        printf("2. Prime\n");
        printf("3. Odd\\Even\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
               printf("\n enter a number");
				scanf("%d",&num);
				int rev=0;rem=0;
				dup=num;
				while(num>0)
				{
					rem=num%10;
					rev=(rev*10)+rem;
					num=num/10;
				}
				if(rev==dup)
				printf("\n number is palindrome");
				else
				printf("\n number is not palindrome \n");
				break;
            case 2:
                printf("Enter number:\n");
                scanf("%d", &num);
                if(num == 1)
                printf("\n1 is neither prime nor composite\n\n");
                for(i = 2; i < num; i++)
                {
                    if(num%i == 0)
                    {
                        printf("\n%d is not a prime number\n\n", num);
                        break;
                    }
                
                }
                /*
                    Not divisible by any number other 
                    than 1 and itself
                */
                if(i == num) 
                {
                    printf("\n\n%d is a Prime number\n\n", num);
                    break;
                }
        
            case 3:
                printf("Enter number:\n");
                scanf("%d", &num);
        
                if(num%2 == 0) // 0 is considered to be an even number
                    printf("\n\n%d is an Even number\n\n",num);
                else
                    printf("\n\n%d is an Odd number\n\n",num);
                break;
        
            case 4:
                printf("\n\n\t\t\tCoding is Fun !\n\n\n");
                break;
        }
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
