#include <stdio.h>

/**
 * main - nature made the natural number
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
			printf("%d \n", sum);
			i++;
		}
	}
	return (0);
}
