#include "main.h"

/**
 * _isalpha - check to confirm if its a letter
 *@c: parameter
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	char i, j;

	for (i = 'A'; i <= 'Z'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if ((c == i) || (c == j))
			{
				return (1);
			}
		}
	}
	return (0);
}
