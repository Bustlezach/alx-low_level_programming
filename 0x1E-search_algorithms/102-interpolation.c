/*
 * File: 102-interpolation.c
 * Auth: Oluwaseun Z Olorunshola
 */

#include "search_algos.h"

/**
 * interpolation_search - Using interpolation search to search
 *                         for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array, or -1 if not found.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t left, right, pos;

    if (array == NULL)
        return (-1);

    left = 0;
    right = size - 1;

    while (left <= right && value >= array[left] && value <= array[right])
    {
        if (left == right)
        {
            if (array[left] == value)
                return (left);
            return (-1);
        }

        pos = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return (pos);

        if (array[pos] < value)
            left = pos + 1;
        else
            right = pos - 1;
    }

    printf("Value checked array[%lu] is out of range\n", pos);
    return (-1);
}

