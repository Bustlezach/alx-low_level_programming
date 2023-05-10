#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located,
 *         or -1 if the value is not present or the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0, step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (b < size && array[b] < value)
	{
		a = b;
		b += step;
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	while (a < b)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}

	return (-1);
}
