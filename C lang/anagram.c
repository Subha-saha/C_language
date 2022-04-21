#include<stdio.h>
#include<string.h>
void check_anagram();
int main()
{
	int choice;
	while(1)
 	{
 		printf("\n1.TO CHECK ANAGRAM");
 		printf("\n2.Exit");

 		printf("\nENTER YOUR CHOICE:");
 		scanf("%d",& choice);
 		switch(choice)
 		{
 			case 1: check_anagram();
 			         break;
 			case 2: exit(1);
 					 break;
 			default: printf("ENTER A VALID CHOICE:");

        }
	}
}
//function to check anagram string
void check_anagram()
{
	char str1[20], str2[20];
    int len, len1, len2, i, j, found=0, not_found=0;
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("\nEnter second string: ");
    scanf("%s",str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 == len2)
    {
        len = len1;
        for(i=0; i<len; i++)
        {
            found = 0;
            for(j=0; j<len; j++)
            {
                if(str1[i] == str2[j])//compare the strings
                {
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                not_found = 1;
                break;
            }
        }
        if(not_found == 1)
            printf("\nStrings not Anagram");
        else
            printf("\nStrings are Anagram: %s  %s", str1,str2);
    }
    else
        printf("\nBoth string must contain same number of characters");

}
