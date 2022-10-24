#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: pointer value
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}
