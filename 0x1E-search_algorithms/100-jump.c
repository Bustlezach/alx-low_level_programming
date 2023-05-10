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
	int i = 0;
	int step = sqrt(size);
	int x;

	if (size == 0 || array == NULL)
		return (-1);

	while (array[step] <= value && (step < (int)size))
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = step;
		step += sqrt(size);
		if (step > ((int)size - 1))
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", array[i], array[step]);

	for (x = i; x < step; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
