#include <stdio.h>
/**
 * main - This is going to be the entry point
 *
 * Return: 0 is analysed
 */
int main(void)
{
	printf("Size of a char: %i bytes(s)\n",(unsigned long)sizeof(char));
	printf("Size of an int: %i bytes(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %i bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %i bytes(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %i bytes(s)\n", (unsigned long)sizeof(float));
	return (0);
}
