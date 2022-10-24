#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer value
 * Return: always 0
 */

void puts_half(char *str)
{
	int i, j, n;

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	n = (i - 1) / 2;

	if (i % 2 == 0)
	{
		for (j = (i / 2); str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = n; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
}
