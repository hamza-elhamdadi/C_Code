#include <stdio.h>

//method to multiply vector1 and vector2
void multi_vec(int *v1, int *v2, int *v3, int n)
{
	*v3 = (*v2) * (*v1);
}

//method to compare vector1 and vector2
int comp_vec(int *v1, int *v2, int n)
{
	if(*v1 == *v2)
	{
		return 0;
	}
	else
	{
		return 1;
	}	
}

int main(void)
{
	int n;
	int flag = 1;
	
	int size;
	//Takes in length of the vectors
	printf("\nEnter the length of the vectors: ");
	scanf("%d", &size);
	
	//Declares vectors
	int v1[size];
	int v2[size];
	int v3[size];

	//Initializes vectors
	printf("\nEnter the first vector: ");
	for(n = 0; n < size; n++)
	{
		scanf("%d", &v1[n]);
	}

	printf("\nEnter the second vector: ");
	for(n = 0; n < size; n++)
	{
		scanf("%d", &v2[n]);
	}
	
	//multiply vectors together
	for(n = 0; n < size; n++)
	{
		multi_vec(&v1[n], &v2[n], &v3[n], n);
	}
	
	//compare the two inputed vectors
	for(n = 0; n < size; n++)
	{
		flag = comp_vec(&v1[n], &v2[n], n);
	}

	//outputs the multiplication of vector1 and vector2
	printf("\nThe multiplication of the vectors is: ");
	for(n = 0; n < size; n++)
	{
		printf("%d ", v3[n]);
	}
	
	//outputs whether the vectors of the same
	if(flag == 0)
	{
		printf("\nThe vectors are the same.");
	}
	else
	{
		printf("\nThe vectors are not the same.");
	}
	
	return 0;
}
