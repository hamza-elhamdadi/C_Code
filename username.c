#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int flag = 0;
	int count = 0;
	int ch = 0;
	
	//Asks the user for the username
	printf("\nPlease enter a 5-10 character username (only alphabetic letters, digits, and underscores): ");
	//do while loop that tests each char to make sure it is valid and adds to a counter for the length of the username
	do
	{
		ch = getchar();
		if(ch != '\n' && ch != '_' && !isdigit(ch) && !isalpha(ch))
		{
			flag = 1;
		}
		count++;
	}
	while(ch != '\n');
	//tests the length of the counter to make sure it is valid.
	if(count < 5 || count > 10)
	{
		flag = 1;
	}
	
	//if else statement that outputs whether the username is valid.
	if(flag == 0)
	{
		printf("\nYou have entered a valid username.");
	}
	else if(flag == 1)
	{
		printf("\nInvalid input.");
	}
	return 0;
}
