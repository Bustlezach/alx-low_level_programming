#include <stdio.h>

/**
 * main - using putchar
 * Return: to produce lowercase of alphabet
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
