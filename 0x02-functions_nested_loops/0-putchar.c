#include "main.h"

/**
 * main - print _putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char name[] = "_putchar";
	int i;

	for (i = 0; name[i] != 0; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');

	return (0);
}
