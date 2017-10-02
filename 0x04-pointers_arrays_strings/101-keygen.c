#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates valid password to open file
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int sum;
	int random;
	int valid = 0;
	char pass[99]; 

	srand(time(0));
	while (!valid)
	{
		i = 0;
		sum = 0;
		while (sum < 2772)
		{
			random = rand() % 3;
			if (random % 3 == 0)
				*(pass + i) = rand() % 10 + 48;
			else if (random % 3 == 1)
				*(pass + i) = rand() % 26 + 65;
			else
				*(pass + i) = rand() % 26 + 97;
			sum += *(pass + i);
			i++;
		}
		valid = (sum == 2772);
		*(pass + i) = '\0';
	}
	printf("%s\n", pass);
	return (0);
}
