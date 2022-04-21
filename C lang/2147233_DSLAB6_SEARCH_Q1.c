/*
@uthor: Subhadip Saha, 2147233, 3MCA B
DATA STRUCTURES LAB 6
Q1.IMPLEMENT LINEAR,BINARY AND HASHING ON AN ARRAY WITH RANDOM ELEMENTS
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int disp(int a[], int n)
{
	int i;
	printf("\nThe Order is: \n");
	for (i = 0; i < n; i++)
	{
		printf("[%d]|", i);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf(" %d|", a[i]);
	}
}
int linSearch(int a[], int n, int key) // linear search function
{
	int i = 0;
	while (i < n)
	{
		if (a[i] == key)
		{
			printf("\nFound");
			return i;
		}
		i++;
	}
	return -1;
}
int hashSearch(int a[], int n, int k)
{
	int i = 0, a2[100], pos, n1, j, x, y, q = 0, z;
	n1 = n;
	for (i = 0; i < n; i++)
	{
		a2[i] = -1;
	}
	disp(a2, n);
	j = 0;
	for (j = 0; j < n; j++)
	{
		x = a[j] % n;
		if (a2[x] == -1)
		{
			a2[x] = a[j];
		}
		else
		{
			for (i = 0; x + i < n; i++)
			{
				if (a2[x + i] == -1)
				{
					a2[x + i] = a[j];
					q = 1;
					break;
				}
				else
				{
					q = -1;
				}
			}
			if (q == -1)
			{
				for (z = 0; z < x; z++)
				{
					if (a2[z] == -1)
					{
						a2[z] = a[j];
						break;
					}
				}
			}
		}
	}
	disp(a2, n);
	y = k % n;

	if (a2[y] == k)
	{
		printf("\nELEMENT FOUND!\n");
		return y;
	}
	else
	{
		i = 0;
		while (y + i < n)
		{
			if (a2[y + i] == k)
			{
				pos = y + i;
				printf("\nELEMENT FOUND!\n");
				return pos;
			}
			i++;
		}
		if (a2[n - 1] != k)
		{
			i = 0;
			while (i < y)
			{
				if (a2[i] == k)
				{
					printf("\nELEMENT FOUND!\n");
					pos = i;
					return pos;
				}
				i++;
			}
		}
		else
		{
			printf("\nELEMENT NOT FOUND!\n");
			return -1;
		}
	}
}
int binSearch(int a[], int start, int end, int key) // binary search function
{
	int mid = 0;
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (a[mid] == key)
			return mid;
		if (a[mid] < key)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}
void selsort(int a[], int n) // sorting function
{
	int i, j, pos, swap;
	for (i = 0; i < (n - 1); i++)
	{
		pos = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[pos] > a[j])
				pos = j;
		}
		if (pos != i)
		{
			swap = a[i];
			a[i] = a[pos];
			a[pos] = swap;
		}
	}
	printf("\nSorted Array:\n");
	disp(a, n);
}
void main()
{
	int a[100], a1[100], n, k, i, j, ch1 = 0, ch2 = 0, pos = 0;
	printf("\nENTER NO. OF ELEMENTS FOR THE ARRAY: ");
	scanf("%d", &n);
	printf("\n1.ENTER MANUALLY\n2.GENERATE RANDOM ARRAY\nENTER CHOICE: ");
	scanf("%d", &ch1);
	if (ch1 == 1)
	{
		for (i = 0; i < n; i++)
		{
			printf("\nENTER ARRAY ELEMENT: ");
			scanf("%d", &a[i]);
			a1[i] = a[i];
		}
	}
	else if (ch1 == 2)
	{
		printf("\nRANDOMLY GENERATING ARRAY: ...");
		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 200;
			a1[i] = a[i];
		}
	}

	else
	{
		printf("\nEnter Valid Option!");
	}

	disp(a, n);

	while (ch2 != 4)
	{
		printf("\nENTER ELEMENT TO BE SEARCHED: ");
		scanf("%d", &k);
		printf("\nSEARCHING MENU\n1.LINEAR SEARCH\n2.BINARY SEARCH\n3.HASH SEARCH\n4.EXIT\n5.UNSORT ARRAY\nENTER YOUR CHOICE: ");
		scanf("%d", &ch2);
		switch (ch2)
		{
		case 1:

			pos = linSearch(a, n, k);
			break;
		case 2:
			j = 0;
			selsort(a, n);
			pos = binSearch(a, j, n - 1, k);
			break;
		case 3:
			pos = hashSearch(a, n, k);
			break;
		case 4:
			printf("\nPROGRAM END...........................................................................");
			break;
		case 5:
			printf("\nRESORTING ARRAY TO INITIAL POSITIONS.....\n");
			for (i = 0; i < n; i++)
			{
				a[i] = a1[i];
			}
			disp(a, n);
			break;
		default:
			printf("\nENTER VALID OPTION!");
			pos = -1;
			break;
		}
		if (pos == -1)
		{
			printf("\nELEMENT NOT FOUND!\n");
		}
		else
		{
			printf("\nELEMENT %d FOUND AT %d!", k, pos);
		}
	}
}

