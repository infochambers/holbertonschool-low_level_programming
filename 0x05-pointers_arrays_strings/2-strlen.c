#include "holberton.h"
#include <stdio.h>

/**
 * _strlen --  a function that returns the length of a string.
 *
 * @s: incoming number
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */

int _strlen(char *s)
{

	int count = 1;

	while (s[count] != '\n')
	{

		count++;
	}

	return (count);


}
