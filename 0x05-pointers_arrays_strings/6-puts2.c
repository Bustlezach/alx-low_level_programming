#include "main.h"

/**
 * puts - print every character of a string
 * @str: pointer value
 * Return: always 0
 */

void puts2(char *str)
{
	int i;
	int j;


	for (i = 0 ; str[i] != '\0' ; i++)
	{
		;
	}
	for (j = 0 ; j < i ; j++)
	{
		if (j % 2 != 0)
			continue;
		_putchar(str[j]);
	}
	_putchar('\n');
}
