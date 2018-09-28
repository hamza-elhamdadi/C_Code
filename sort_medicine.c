#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LEN 100

struct medicine{
	char name[LEN+1];
	int units_in_stock;
	int units_sold[6];
	int total_sold;
};

void selection_sort(struct medicine inventory[], int n);


int main()
{
	int i, j, count = 0, count2 = 0;;
	struct medicine inventory[LEN];
	FILE *pFile1, *pFile2;
	pFile1 = fopen("pain_allergy.txt", "r");
	pFile2 = fopen("pain_allergy.txt.srt", "a");
	if(pFile1 == NULL)
	{	
		printf("Error opening file\n");
		return 1;
	}
	if(pFile2 == NULL)
	{
		printf("Error writing to file\n");
		return 1;
	}
	
	while(!feof(pFile1))
	{
		fscanf(pFile1, "%s%d%d%d%d%d%d%d", inventory[count].name, &inventory[count].units_in_stock, &inventory[count].units_sold[0], &inventory[count].units_sold[1], &inventory[count].units_sold[2], &inventory[count].units_sold[3], &inventory[count].units_sold[4], &inventory[count].units_sold[5]);
		count++;
	}
	
	for(i = 0; i < LEN; i++)
	{
		for(j = 0; j < 6; j++)
		{
			count2 += inventory[i].units_sold[j];
		}
		inventory[i].total_sold = count2;	
	}
	
	selection_sort(inventory, LEN);

	for(i = 0; i < count; i++)
	{
		fprintf(pFile2, "%d\t%s\t%d\t", i+1, inventory[count].name, inventory[count].units_in_stock);

		fprintf(pFile2, "%d %d %d %d %d %d", inventory[count].units_sold[0], inventory[count].units_sold[1], inventory[count].units_sold[2], inventory[count].units_sold[3], inventory[count].units_sold[4], inventory[count].units_sold[5]);
	
		fprintf(pFile2, "%d\n", inventory[count].total_sold);
	}
	
	return 0;
}

void selection_sort(struct medicine inventory[], int n)
{
	int i, j, largest = 0, temp1, temp2, temp3;
	char temp4[101];

	if (n == 1)
		return;

	for (i = 1; i < n; i++)
 		if (inventory[i].total_sold > inventory[largest].total_sold)
      			largest = i;

  		if (largest < n - 1) {
    			temp1 = inventory[n-1].total_sold;
    			inventory[n-1].total_sold = inventory[largest].total_sold;
    			inventory[largest].total_sold = temp1;
			for(j = 0; j < 6; j++)
			{
				temp2 = inventory[n-1].units_sold[j];
				inventory[n-1].units_sold[i] = inventory[largest].units_sold[i];
				inventory[largest].units_sold[i] = temp2;
			}
  			temp3 = inventory[n-1].units_in_stock;
			inventory[n-1].units_in_stock = inventory[largest].units_in_stock;
			inventory[largest].units_in_stock = temp3;
			strcpy(temp4, inventory[n-1].name);
			strcpy(inventory[largest].name, inventory[largest].name);
			strcpy(inventory[n-1].name, temp4);
			
		}

  	selection_sort(inventory, n - 1);
}
