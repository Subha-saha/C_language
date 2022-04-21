#include<conio.h>
#include<string.h>
#include<stdio.h>
//To get length of given string
void lengthofstring()
{
   int length;
   char string[20];
   printf("\nEnter String: ");
   scanf("%s",&string);
   length=strlen(string);
   printf("\nLength of string is: %d",length);
}
//To copy one string into another
void copystring()
{
   char string2[20];
   char string[20];
   printf("\nEnter String: ");
   scanf("%s",&string);
   strcpy(string2,string);
   printf("\nCopied string is: %s",string2);
}
//To concatenatation of 2 strings
void add()
{
   char string2[20];
   char string[20];
   char string3[20];
   printf("\nEnter 1st String: ");
   scanf("%s",&string);
   printf("\nEnter 2nd String: ");
   scanf("%s",&string2);
   printf("\nAddition of 2 string: %s",strcat(string,string2));
}
//To compare 2 String
void compare()
{
   char string2[20];
   char string[20];
   printf("\nEnter 1st String: ");
   scanf("%s",&string);
   printf("\nEnter 2nd String: ");
   scanf("%s",&string2);
   if(strcmp(string,string2)==0)
   {
   	printf("\nBoth are equal");
   }
   else
   {
   	printf("\nBoth are different");
   }
}
void main()
{
    int c;
    do
   {
        printf("\n\n1. Length of string\n2. Copy String \n3. Connect Two Strings \n4. Compare two strings\n5. Exit\nEnter your choice:");
        scanf("%d",&c);
        switch(c)
       {
           case 1:lengthofstring();break;
           case 2:copystring();break;
           case 3:add();break;
           case 4:compare();break;
       }
   }while(c<5);
}
