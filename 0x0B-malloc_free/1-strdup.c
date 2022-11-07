#include <stdlib.h>

/**
* _strdup - Copies a string to new allocated space in memory
*
* @str: The string to be copied
*
* Return: Pointer to allocated memory containing copy of @str (SUCCESS)
* OR NULL if @str is empty (FAILURE) OR
* NUL if insufficient memory was available
*/


char *_strdup(char *str)
{
	int i, j;
	char *alloc_mem;

	if (str == NULL)
	{
		return ('\0');
	}


	for (i = 0; str[i] != '\0'; i++)


	alloc_mem = malloc(i * sizeof(char));

	if (alloc_mem == NULL)
	{
		return ('\0');
	}

	for (j = 0; j < i; j++)
	{
		alloc_mem[i] = str[i];
	}

	alloc_mem[i] = '\0';

	return (alloc_mem);

}
