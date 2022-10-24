#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: pointer value
 * Return: always 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
