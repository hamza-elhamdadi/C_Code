#include <stdio.h>

#define DAYS_IN_WEEK 7

int main(void)
{
	//Initializing variables.
	int day_of_week = 0;
	int num_days = 0;
	
	//This part of the program asks the user for the day of the week and stores it as an integer variable.
	printf("Please enter the day of the week: ");
	scanf("%d", &day_of_week);

	//This if statement determines whether the inputed value is within the range 0 to 6. If not it outputs an error.
	if(day_of_week >6 || day_of_week < 0)
	{
		printf("\nInvalid amount %d", day_of_week);
		printf("\nAmount must be between 0 and 6, inclusive.");
		return 0;
	}
	
	//This part of the program asks the user for the number of days permitted for the assignment and stores it as an integer variable.
	printf("Please enter the number of days permitted for the assignment: ");
	scanf("%d", &num_days);
		
	//This switch statement outputs the day of the week on which the assignment is due and how many days until that due date. If the assignment falls on a friday, saturday,
	//or sunday, the statment changes the output to the following monday and adds the respective number of days to the num_days value.
	switch((day_of_week + num_days) % 7){
		case 0:
			num_days = num_days + 1;
			printf("\nThe day the assignment is due falls on a holiday.");
			printf("\nYou must instead assign %d days for this assignment.", num_days);
			printf("\nThe day the assignment is due is Monday.");
			break;
		case 1:
			printf("\nYou have assigned %d for this assignment.", num_days);
			printf("\nThe day the assignment is due is Monday.");
			break;
		case 2:
			printf("\nYou have assigned %d for this assignment.", num_days);
                        printf("\nThe day the assignment is due is Tuesday.");
			break;
		case 3:
			printf("\nYou have assigned %d for this assignment.", num_days);
                        printf("\nThe day the assignment is due is Wednesday.");
			break;
		case 4:
			printf("\nYou have assigned %d for this assignment.", num_days);
                        printf("\nThe day the assignment is due is Thursday.");
			break;
		case 5:
			num_days = num_days + 3;
			printf("\nThe day the assignment is due falls on a holiday.");
                        printf("\nYou must instead assign %d days for this assignment.", num_days);
                        printf("\nThe day the assignment is due is Monday.");
			break;
		case 6:
			num_days = num_days + 2;
			printf("\nThe day the assignment is due falls on a holiday.");
                        printf("\nYou must instead assign %d days for this assignment.", num_days);
                        printf("\nThe day the assignment is due is Monday.");
			break;
	}
	//Necessary return 0 statement.
	return 0;

}
