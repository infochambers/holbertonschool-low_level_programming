#include "holberton.h"

/**
 * _strlen --  a function that returns the length of a string.
 *
 * @s: incoming number
 *
 *
 *
 * Return: count (Success)
 *
 */

int _strlen(char *s)
{

	int count = 0;

	while (s[count] != '\0')
	{

		count++;
	}

	return (count);


}
