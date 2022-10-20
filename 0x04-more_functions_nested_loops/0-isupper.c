#include "main.h"

/**
 * _isupper(int c) - check uppercase charater
 *@c: input value
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
