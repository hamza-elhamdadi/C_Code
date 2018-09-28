#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10

//function declarations`
void selection_sort(int a[], int length);

int main(int argumentC, char* argumentV[])
{
	int i;
	int j = 2;
	int a[N];
	
	if(argumentC < 12 || argumentC > 12)
	{
		printf("Usage: ./a.out -option (a or m) followed by 10 numbers \n");
		return 1;
	}
	
	for(i = 0; i < N; i++)
	{
		a[i] = atoi(argumentV[j++]);
	}
	
	if(strcmp(argumentV[1], "-a") == 0)
	{
		int sum = 0;
		for(i = 0; i < N; i++)
		{
			sum += a[i];
		}
		float average = (float)sum/N;
		printf(" %.1f \n", average);
	}
	else if(strcmp(argumentV[i], "-m")== 0)
	{
		selection_sort(a,N);
		printf(" %d", a[N/2]);
	}
	else
	{
		printf(" Invalid option ");
	}
	printf("\n");
	return 0;
}

void selection_sort(int a[], int length)
{
	int i;
	int largest = 0;
	int j;
	if(length == 1)
	{
		return;
	}
	for(i = 1; i < length; i++)
	{
		if(a[i]>a[largest])
		{
			largest = 1;
		}
		if(largest < (length-1))
		{
			j = a[length-1];
			a[length-1] = a[largest];
			a[largest] = j;
		}
		selection_sort(a, length-1);
	}
}





























































































