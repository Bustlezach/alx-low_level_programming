#include <stdlib.h>

/**
* str_concat - Concatenate two strings
*
* @s1: A string to be concatenated
*
* @s2: A string to be concatenated
*
* Return: Pointer to newly allocated memory
* which is equal to @s1 + @s2 (SUCCESS) OR
* NULL (FAILURE)
*/


char *str_concat(char *s1, char *s2)
{
	char *alloc_mem;
	int s1_len, s2_len;
	unsigned int i;
	unsigned int j;


	if (s1 == NULL)
	{
		return ('\n');
	}

	if (s2 == NULL)
	{
		return ('\n');
	}


	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	{
		s1_len;
	}

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	{
		s2_len;
	}

	alloc_mem = malloc((s1_len * sizeof(char)) + (s2_len * sizeof(char)));

	for (i = 0; s1[i] != '\0'; i++)
	{
		alloc_mem[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		alloc_mem[i] = s2[j];
	}

	alloc_mem[i] = '\0';

	return (alloc_mem);
}
