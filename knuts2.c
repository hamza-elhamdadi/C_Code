#include <stdio.h>

#define NUM_KNUTS_IN_GALLEON 493
#define NUM_KNUTS_IN_SICKLE 29

// Converts knuts into galleons, sickles, and knuts.
void convert(int total_knuts, int * galleons, int * sickles, int * knuts)
{
	* galleons = (int) (total_knuts / NUM_KNUTS_IN_GALLEON);
	total_knuts = total_knuts % NUM_KNUTS_IN_GALLEON;
	* sickles = (int) (total_knuts / NUM_KNUTS_IN_SICKLE);
	total_knuts = total_knuts % NUM_KNUTS_IN_SICKLE;
	* knuts = (int) total_knuts;
}

int main(void)
{
	
        int total_knuts;
	int knuts, sickles, galleons;
	//This printf and scanf section asks the user for the number of knuts they have and stores it as an integer.
        printf("Please enter the number of knuts you have: \n");
        scanf("%d", &total_knuts);		
	
	//This if statement determines whether the value for num_knuts is between 0 and 1000000000. If not it outputs an error.
        if(total_knuts < 0 || total_knuts > 1000000000)
        {
                printf("Invalid amount %d", total_knuts);
		printf("\nAmount must be between 0 and 1000000000, inclusive.");
                return 0;
        }

	//Call convert method
	convert(total_knuts, &galleons, &sickles, &knuts);
	
	//Print out the converted values.
        printf("\nYou have %d galleons, ", galleons);
	printf("%d sickles, ", sickles);
	printf("and %d knuts.", knuts);

	//Necessary return 0 to end the main method.
        return 0;
}

