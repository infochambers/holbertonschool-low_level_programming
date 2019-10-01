#include "holberton.h"

/**
 * puts2 -- a function that prints every other character of a
 * string, starting with the first character, followed by a new line.
 *
 * @str: incoming string
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */

void puts2(char *str)
{

	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);

		count+=2;
	}

		_putchar('\n');

}
