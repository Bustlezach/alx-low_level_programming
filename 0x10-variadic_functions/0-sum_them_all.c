#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: total number of parameters
* Return: sum of value parameters
*/


int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);

	return (sum);
}
