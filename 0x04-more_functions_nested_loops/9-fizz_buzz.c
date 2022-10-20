#include "main.h"
#include <stdio.h>

/**
 * main - "Fizz-Buzz" test
 *
 * Return: 0 always
 */

int main(void)
{
	int i, n;

	n = 100;
	for (i = 1; i <= n; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
