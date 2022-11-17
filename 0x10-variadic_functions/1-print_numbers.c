#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - prints numbers
* @separator: pointer to the string to be printed between numbers
* @n: number of integers passed to the function
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	unsigned int num;

	va_start(ap, n);
	for (i = 0; i < ((n - 1) && (n != 0)); i++)
	{
		num = va_arg(ap, int);
		if (separator == NULL)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d%s", num, separator);
		}
	}
	if (n)
	{
		printf("%d\n", num);
	}
	else
	{
		printf("\n");
	}
	va_end(ap);
}
