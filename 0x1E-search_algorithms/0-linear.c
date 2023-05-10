#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Search for a value in an integer array
 * @array: Pointer to the array to search
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	int i;
	if (array == NULL)
		return (-1);

	for (i = 0; i <(int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
	return (-1);
}
