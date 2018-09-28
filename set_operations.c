#include <stdio.h>
#include <math.h>

int main(void)
{
	//list of variables that will be used in the program
	int i;
	int j;
	int size_a;
	int size_b;

	int array_a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int array_b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	int computation[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	int comp_a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int comp_b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	//take in the first array
	printf("\nHello! How many numbers would you like to input into the first array (A)? Please enter a positive integer greater than 0: ");
	scanf("%d", &size_a);
	
	printf("Please enter the array of numbers (separated by a space).");
	for(i = 0; i < size_a; i++)
	{
		scanf("%d", &j);
		array_a[j] = 1;
	}
	//Take in the second array
	printf("\nHow many numbers would you like to input into the second array (B)? Please enter a positive integer: ");
	scanf("%d", &size_b);

	printf("\nPlease enter the array of numbers (separated by a space).");
	for(i = 0; i < size_b; i++)
	{
		scanf("%d", &j);
		array_b[j] = 1;
	}
		
	//computation A - B
	for(i = 0; i < 10; i++)
	{
		if((array_a[i] == 1) && (array_b[i] != 1))
		{
			computation[i] = 1;
		}	
	} 
	
	printf("\nThe difference of set A and B is: ");
	for(i = 0; i < 10; i++)
	{
		if(computation[i] == 1)
		{
			printf("%d ", i);
		}
	}

	//complement
	for(i = 0; i < 10; i++)
	{
		if(array_a[i] == 1)
		{
			comp_a[i] = 0;
		}
		else if(array_a[i] == 0)
		{
			comp_a[i] = 1;
		}
		if(array_b[i] == 1)
		{
			comp_b[i] = 0;
		}
		else if(array_b[i] == 0)
		{
			comp_b[i] = 1;
		}
	}

	printf("\nThe complement of set A is: ");
	for(i = 0; i < 10; i++)
	{
		if(comp_a[i] == 1)
		{
			printf("%d ", i);
		}
	}
	printf("\nThe complement of set B is: ");
	for(i = 0; i < 10; i++)
	{
		if(comp_b[i] == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
