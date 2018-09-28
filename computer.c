#include <stdio.h>

#define QUARTER 0.25
#define DIME 0.10
#define NICKEL 0.05
#define PENNY 0.01

int main(void)
{
	int num_quarters = 0;
	int num_dimes = 0;
	int num_nickels = 0;
	int num_pennies = 0;
	
	printf("Please enter the number of quarters you have:");
	scanf("%d", &num_quarters);

	printf("\nPlease enter the number of dimes you have:");
	scanf("%d", &num_dimes);

	printf("\nPlease enter the number of nickels you have:");
	scanf("%d", &num_nickels);

	printf("\nPlease enter the number of pennies you have:");
	scanf("%d", &num_pennies);

	printf("\nAmount: $%.2f\n", (num_quarters*QUARTER) + (num_dimes*DIME) + (num_nickels*NICKEL) + (num_pennies*PENNY));
	return - 0;
}
