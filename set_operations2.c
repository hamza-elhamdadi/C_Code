#include <stdio.h>
#include <math.h>

//method that creates the difference of array a - array b
void set_difference(int *a, int *b, int n, int *difference)
{
	if(*a == 1 && *b != 1)
	{
		*difference = 1;
	}

}

//method that creates the complement of array a
void set_complement(int *a, int n, int *complement)
{
	if(*a == 1)
	{
		*complement = 0;
	}
	else if(*a == 0)
	{
		*complement = 1;
	}
}

int main(void)
{
	//list of variables that will be used in the program
	int n;
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
	for(n = 0; n < size_a; n++)
	{
		scanf("%d", &j);
		array_a[j] = 1;
	}
	//Take in the second array
	printf("\nHow many numbers would you like to input into the second array (B)? Please enter a positive integer: ");
	scanf("%d", &size_b);

	printf("\nPlease enter the array of numbers (separated by a space).");
	for(n = 0; n < size_b; n++)
	{
		scanf("%d", &j);
		array_b[j] = 1;
	}
		
	//computation A - B
	for(n = 0; n < 10; n++)
	{
		set_difference(&array_a[n], &array_b[n], n, &computation[n]); 
	}

	printf("\nThe difference of set A and B is: ");
	for(n = 0; n < 10; n++)
	{
		if(computation[n] == 1)
		{
			printf("%d ", n);
		}
	}

	//complement	
	for(n = 0; n < 10; n++)
	{
		set_complement(&array_a[n], n, &comp_a[n]);
		if(array_b[n] == 1)
		{
			comp_b[n] = 0;
		}
		else if(array_b[n] == 0)
		{
			comp_b[n] = 1;
		}
	}

	printf("\nThe complement of set A is: ");
	for(n = 0; n < 10; n++)
	{
		if(comp_a[n] == 1)
		{
			printf("%d ", n);
		}
	}
	printf("\nThe complement of set B is: ");
	for(n = 0; n < 10; n++)
	{
		if(comp_b[n] == 1)
		{
			printf("%d ", n);
		}
	}
	return 0;
}
