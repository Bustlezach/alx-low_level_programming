#include "main.h"
#include <stdio.h>

/**
 * print_line - draw straight line
 * @n: input value
 * Return: result
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}

	putchar('\n');
}
