#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * @argc: incoming argument
 * @argv: incoming argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
	{

	int countloop;

	for (countloop = 0 ; countloop <= argc ; countloop++)
	{

		printf("%s\n", argv[countloop]);

	}

	return (0);

	}
