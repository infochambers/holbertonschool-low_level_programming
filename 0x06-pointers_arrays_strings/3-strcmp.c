#include "holberton.h"

/**
 * _strcmp -- a function that compares two strings.
 *
 * @s1: incoming characters
 * @s2: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

int _strcmp(char *s1, char *s2)
{

	int count;

	for (count = 0 ; s1[count] != '\0' ; count++)
	{
		for (count = 0 ; s2[count] != '\0' ; count++)
		{
			if (s1[count] < s2[count])
			{
				return (-15);
			}

			if (s1[count] > s2[count])
			{
				return (15);
			}
		}
	}

	if (s1[count] == s2[count])
	{
		_putchar('0');
	}

return (0);

}
