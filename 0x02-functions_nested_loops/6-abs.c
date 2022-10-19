#include "main.h"

/**
 * _abs - computes the absolute number
 * @number: it receives positive or negative number
 *
 * Return: int
 */
int _abs(int number)
{
	int result;

	if (number < 0)
	{
		result = number * -1;
		return (result);
	}
	else
	{
		result = number;
		return (result);
	}
}
