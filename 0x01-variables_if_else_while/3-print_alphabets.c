#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 
int main(void)
	{

	int loopA, loopa;

	for(loopa = 'a' ; loopa <= 'z' ; loopa++)
	{
		putchar(loopa);
	}

	for(loopA = 'A' ; loopA <= 'Z' ; loopA++)
	{
		putchar(loopA);
	}

		putchar('\n');

		return (0);
	}
