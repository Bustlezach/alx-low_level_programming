#include "main.h"
#include <stdio.h>


/**
 * more_numbers - 10x from 0 to 14
 *
 * Return: list of numbers
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			putchar('1');
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
