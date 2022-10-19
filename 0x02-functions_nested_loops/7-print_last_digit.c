#include "main.h"

/**
 * print_last_digit - produce the last digit of a number
 *@v: v is a number
 * Return: Always 0
 */

int print_last_digit(int v)
{
	int last;

	if (v >= 10)
	{
		last = v % 10;
	}
	else if (v < 0)
	{
		last = v * -1;
	}
	else
	{
		last = v;
	}
	_putchar(last);
	return (last);
}
