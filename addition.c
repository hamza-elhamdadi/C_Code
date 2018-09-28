#include <stdio.h>
//method that adds two numbers based on whether one or both are positive or negative, one is equal to zero
int add(int n, int m)
{
	if(m == 0)
	{
		return n;
	}
	else if(n == 0)
	{
		return m;
	}
	else if(m < 0 && n > 0)
	{
		return add(--n, ++m);
	}
	else if(m > 0 && n < 0)
	{
		return add(++n, --m);
	}
	else if(m > 0 && n > 0)
	{
		return add(++n, --m);
	}
	else
	{
		return add(--n, ++m);
	}
}

int main(void)
{
	//declare variables
	int n;
	int m;
	
	//Gather numbers
	printf("Please enter two numbers to add together (separated by spaces): ");
	scanf("%d %d", &n, &m);
	
	//This print method calls the recursive method to add the numbers together.
	printf("The sum of the two numbers you entered is %d", add(n, m));
	
	return 0;
}
