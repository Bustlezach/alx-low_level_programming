#include "main.h"

/**
* _strstr - Locating a substring
*
* @needle: Occurance to find
*
* @haystack: String to search
*
* Return: Pointer
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *sc = haystack;
		char *sb = needle;

		while (*haystack && *sb && *haystack == *sb)
		{
			haystack++;
			sb++;
		}
		if (!*sb)
			return (sc);
		haystack = sc + 1;
	}
	return (0);
}
