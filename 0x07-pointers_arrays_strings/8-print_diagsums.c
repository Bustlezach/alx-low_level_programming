#include "main.h"
#include <stdio.h>

/**
* print_diagsums - Prints the sum of diagonals
*
* @a: Pointer to an array
*
* @size: Size of the matrix
*
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		d2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
