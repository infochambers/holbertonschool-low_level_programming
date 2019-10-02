#include "holberton.h"

/**
 * rev_string -- a function that reverses a string. 
 *
 * @s: incoming string
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */

void rev_string(char *s)
{

	int count = 0;

	while (s[count] != '\0')
	{

		_putchar(s[count]);

		count++;

	}

	for (; count >= 0 ; count--)
	{

		_putchar(s[count]);

	}

		_putchar('\n');

}
