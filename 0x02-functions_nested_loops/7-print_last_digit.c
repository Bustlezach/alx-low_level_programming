#include "main.h"

/**
 * print_last_digit - produce the last digit of a number
 *@v: v is a number
 * Return: Always last
 */

int print_last_digit(int v)
{
	int last = v % 10;

	if (v < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
