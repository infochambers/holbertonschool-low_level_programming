#include "holberton.h"

/**
 * print_rev -- a function that prints a string, in
 * reverse, followed by a new line.
 *
 * @s: incoming string
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */

void print_rev(char *s)
{

	int count = 0;

	while (s[count] != '\0')
	{

		count++;
	}

	for (; count >= 0 ; count--)
	{
		_putchar(s[count]);

	}

		_putchar('\n');

}
