#include "main.h"

/**
 * swap_int - function to swap two integer
 * @a: first integer
 * @b: second integer
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
