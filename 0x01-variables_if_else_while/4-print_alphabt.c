#include <stdio.h>

/**
 * main - task four
 * Return: alphabet without letter e and q
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
			putchar(i);
	}
	putchar('\n');

	return (0);
}
