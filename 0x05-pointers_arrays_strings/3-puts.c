#include "holberton.h"

/**
 * _puts -- a function that prints a string, followed by a
 * new line, to stdout.
 *
 * @str: incoming string
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */

void _puts(char *str)
{

	int count = 0;

	while (str[count] != '\n')
	{
		_putchar(str[count]);

		count++;
	}

}
