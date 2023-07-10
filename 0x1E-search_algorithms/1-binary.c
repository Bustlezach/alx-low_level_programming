#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using BSA
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if value is not found or if
 *         array is NULL or empty
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int ls = 0;
	int rs = size - 1;
	int mid = 0;

	if (!array || size <= 0)
	return (-1);

	while (ls <= rs)
	{
		printf("Searching in array: ");
		for (i = ls; i <= rs; i++)
		{
			if (i < rs)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		mid = (ls + rs) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			rs = mid - 1;
		}
		else
		{
			ls = mid + 1;
		}
	}

	return (-1);
}

