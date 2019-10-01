#include "holberton.h"

/**
 * puts_half -- a function that prints half of a string, followed
 * by a new line.
 *
 * @str: incoming string
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */

void puts_half(char *str)
{

	int count = 0, half = 0;

	while (str[count] != '\0')
	{

		count++;
	}

	for (; half < (count / 2) ; half++)
	{
		_putchar(str[half]);

	}

		_putchar('\n');

}
