#include <stdio.h>
#include <math.h>

//constants for formula
#define V 10
#define TIME_CONSTANT 0.15

int main(void)
{
	int i;
	double time = 0;
	double velocity = 0;
	
	printf("\ntime(sec)        voltage");
	
	//for loop that calculates the velocity at each time interval.
	for(i = 0; i <= 15; i++)
	{
		velocity = V * (1 - exp(-time/TIME_CONSTANT));
		printf("\n %.2f             %.2f", time, velocity);
		//time interval increments
		time += 0.06667;
	}
	printf("\n");
		
	return 0;
}
