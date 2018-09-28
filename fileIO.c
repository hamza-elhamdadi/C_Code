#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define LENGTH 100

int are_anagram(char *word1, char *word2);
int read_line(char *str, int n);

int main(void)
{
	char filename[LENGTH+1];
	char filename2[LENGTH+1];
	char line1[LENGTH+1];
	char line2[LENGTH+1];
	
	printf("Enter the file name: ");
	read_line(filename, 100);
	strcpy(filename2, filename);
	strcat(filename2, ".ang");
		
	FILE *pFile1, *pFile2;
	pFile1 = fopen(filename, "r");
	pFile2 = fopen(filename2, "a");
	if(pFile1 == NULL)
	{
		printf("Error reading file\n");
		return 1;
	}
	if(pFile2 == NULL)
	{
		printf("Error reading file\n");
		return 1;
	}
	while(fgets(line1, LENGTH+1, pFile1) != NULL)
	{
		while(fgets(line2, LENGTH+1, pFile1) != NULL)
		{
			if(are_anagram(line1, line2))
			{
				printf("%s", line1);
				printf("\n");
				printf("%s", line2);
				printf("\n");
				fputs(line1, pFile2);
				fputs("\n", pFile2);
				fputs(line2, pFile2);
				fputs("\n", pFile2);
			}
		}
	}
	fclose(pFile1);
	fclose(pFile2);
	return 0;
}

int read_line(char *str, int n)
{
	int ch, i = 0;
	while((ch = getchar()) != '\n')
	{
		if(i < n)
			*str++ = ch;
	}
	*str = '\0';
	return i;
}

int are_anagram(char *word1, char *word2)
{
	int letter_counts[26] = {0};
	char *p; char *q;
	int i, count = 0;
	char ch;
	for(p = word1; *p != '\0'; p++)
	{
		if(isalpha(*p))
		{
			ch = tolower(*p);
			letter_counts[ch - 'a']++;
		}
	}
	for(q = word2; *q != '\0'; q++)
	{
		if(isalpha(*q))
		{
			ch = tolower(*q);
			letter_counts[ch - 'a']--;
		}
	}
	for(i = 0; i < 26; i++)
	{
		if(letter_counts[i] == 0)
		{
			count++;
		}
	}
	if(count==26)
		return 1;
	else
		return 0;
	return 0;	
}

