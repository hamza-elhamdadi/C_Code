#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define LENGTH 1000

//declaring the read line function
int read_line(char *str, int n)
{
	//declaring variable
	int character, i = 0;

	while ((character = getchar()) != '\n')
	{
  		if (i < n)
  		{
    			*str++ = character;
    			i++;
  		}
	}

	*str = '\0';
	return i;

}

void convert (char *s1, char *s2)
{

	int ch;
	char a;
	char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

	while (*s1 != '\0')
	{
		if((*s1 >= 'a'&&*s1 <= 'z')||(*s1 >= 'A'&&*s1 <= 'Z'))
		{
			for (ch = 0;ch < strlen(alpha); ch++)
			{
				if (*s1 == alpha[ch])
				{
					*s2++ = alpha[(25 - ch)];
					s1++;
				}
				else
				{
					a = tolower(*s1);

					if (a == alpha[ch])
					{
					a = alpha[(25 - ch)];
					*s2++ = toupper(a);
					s1++;
 					}
				}
			}
		}
		else
		{
 			*s2++ = *s1;
  			s1++;
		}
	}
 	 *s2 = '\0';
}

int main(void)
{
	char s1[LENGTH + 1];
	char s2[LENGTH + 1];

	//user input
	printf("Enter input: ");

	read_line(s1,LENGTH);

	convert(s1,s2);

	//output for the encrypted name
	printf("Encrypted: %s\n", s2);

	return 0;
}
