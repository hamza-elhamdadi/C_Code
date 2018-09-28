#include <stdio.h>

#define NUM_KNUTS_IN_GALLEON 493
#define NUM_KNUTS_IN_SICKLE 17

int main(void)
{
	
        int num_knuts = 0;
	int remainder = 0;
	
	//This printf and scanf section asks the user for the number of knuts they have and stores it as an integer.
        printf("Please enter the number of knuts you have: \n");
        scanf("%d", &num_knuts);		
	
	//This if statement determines whether the value for num_knuts is between 0 and 1000000000. If not it outputs an error.
        if(num_knuts < 0 || num_knuts > 1000000000)
        {
                printf("Invalid amount %d", num_knuts);
		printf("\nAmount must be between 0 and 1000000000, inclusive.");
                return 0;
        }
	
	//This equation sets the remainder equal to num_knuts modulo the constant i defined for the number of knuts in a galleon.
        remainder = num_knuts % NUM_KNUTS_IN_GALLEON;

	//These two printf statements print out the number of galleons and sickles that can be made. The first uses the num_knuts variable and divides it by the constant
	//to get the number of galleons worth of knuts. The second uses the remainder and divides it by the constant to get the number of sickles worth of knuts remaining.
        printf("\nYou have %d galleons worth of knuts", num_knuts / NUM_KNUTS_IN_GALLEON);

        printf("\nYou have %d sickles worth of knuts", remainder / NUM_KNUTS_IN_SICKLE);

	//This equation stores the remaining knuts which cannot be divided in the remainder variable. Then the following printf method prints that remainder to the screen.
        remainder = remainder % NUM_KNUTS_IN_SICKLE;

        printf("\nAnd a remainder of %d knuts\n", remainder);

	//Necessary return 0 to end the main method.
        return 0;
}

