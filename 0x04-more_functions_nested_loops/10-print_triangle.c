#include "main.h"
#include <stdio.h>

/**
 * print_triangle - produce a triangle
 * @size: input desired size number
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}

	for (i = 0; i <= (size); i++)
	{
		for (j = 0; j <= (size); j++)
		{
			if (j <= (size - i))
				putchar(' ');
			else
				putchar('#');
		}
		putchar('\n');
	}
}
