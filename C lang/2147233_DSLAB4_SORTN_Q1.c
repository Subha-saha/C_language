/*
@uthor: Subhadip Saha, 2147233, 3MCA B
DATA STRUCTURES LAB 4
Q1.IMPLEMENT SELECTION SORT,INSERTION SORT AND QUICK SORT ON AN ARRAY WITH RANDOM ELEMENTS
*/
#include<stdio.h>
#include<stdlib.h>
int ncom=0,nmov=0;
void disp(int a[],int n)
{
int i;
printf("\nThe Order is: \n");

for(i=0;i<n;i++)
{
printf(" %d,",a[i]);
}
}
void insertsort(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
 
        while (j >= 0 && a[j] > key) {
        	ncom++;
            a[j + 1] = a[j];nmov++;
            j = j - 1;
        }
        a[j + 1] = key;nmov++;
    }
   printf("\nSorted Array:\n");
disp(a,n); 
}
void selsort(int a[], int n)
{
int i, j, pos, swap;
for(i = 0; i < (n - 1); i++)
{
pos=i;
for(j = i + 1; j < n; j++)
{
if(a[pos]>a[j])
pos=j;ncom++;//this is counted as well
}
if(pos != i)
{ncom++;
swap=a[i];
a[i]=a[pos];
a[pos]=swap;nmov++;
}
}
printf("\nSorted Array:\n");
disp(a,n);
}
int partition (int a[], int start, int end)  
{  
    int pivot = a[end]; // pivot element  
    int i = (start - 1);  
    int t=0,j;
  
    for ( j = start; j <= end - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (a[j] < pivot)  
        {  
            i++;ncom++; // increment index of smaller element  
             t = a[i];  
            a[i] = a[j];  
            a[j] = t;nmov++;  
        }  
    }  
    t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;nmov++; 
    return (i + 1);  
}  
  
/* function to implement quick sort */  
void quick(int a[], int start, int end) /* a[] = array to be sorted, start = Starting index, end = Ending index */  
{  
    if (start < end)  
    {   ncom++;  
        int p = partition(a, start, end); //p is the partitioning index  
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  

void main()
{
	int sz,a[100],a1[100],ch,i=0;
   printf("Enter the size of array::");
   scanf("%d",&sz);
   for(i=0;i<sz;i++)
     {
	 a[i]=rand()%100;
	 a1[i]=a[i];
}

	    //Generate number between 0 to 99
	
   printf("\nElements of the array::");
   disp(a,sz);
   while(ch!=4)
   {
   	printf("\nSORTING MENU\n1.QUICK SORT\n2.SELECTION SORT\n3.INSERTION SORT\n4.EXIT\n5.GENERATE NEW ARRAY\nEnter Your Choice: ");
   	scanf("%d",&ch);
   	switch(ch)
   	{case 1:
   		quick(a,0,sz-1);
   		printf("\nNo. of Comparisons = %d\nNo. of Moves= %d",ncom,nmov);
   		ncom=0;nmov=0;
   		disp(a,sz);
   		for(i=0;i<sz;i++)
   		{
   			a[i]=a1[i];
		   }
   	break;
   	case 2:
   		printf("\nbefore sort:");
   		disp(a1,sz);
   		selsort(a1,sz);
   		printf("\nNo. of Comparisons = %d\nNo. of Moves= %d",ncom,nmov);
   		ncom=0;nmov=0;
   		
   		break;
   	case 3:
   		printf("\nbefore sort:");
   		disp(a1,sz);
   		insertsort(a1,sz);
   		printf("\nNo. of Comparisons = %d\nNo. of Moves= %d",ncom,nmov);
   		ncom=0;nmov=0;
   		break;
   	case 4:
   		exit(0);
   		break;
   	case 5:
   		printf("\nGENERATING NEW RANDOM ARRAY\n");
   	for(i=0;i<sz;i++)
     {
	 a[i]=rand()%100;
	 a1[i]=a[i];
	 }
	 disp(a1,sz);
	 break;
   		
   			
   	default:
   	printf("\nEnter Valid Choice\n");
   	break;
	   }
   }
	
}
