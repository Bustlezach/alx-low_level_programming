#include "main.h"

/**
 * _islower - check lower case in the alphabet
 *@c: we pass in valua
 * Return: 0 or 1 base on the case
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
