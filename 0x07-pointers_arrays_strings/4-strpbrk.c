#include "holberton.h"

/**
 * _strpbrk -- a function that searches a string for any of a set of bytes.
 *
 * @s: incoming characters
 * @accept: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

char *_strpbrk(char *s, char *accept)
{

	int count1, count2;

	for (count1 = 0 ; s[count1] != '\0' ; count1++)
	{
		for (count2 = 0 ; accept[count2] != '\0' ; count2++)
		{
			if (s[count1] == accept[count2])
			{
				return (accept);
			}
		}
	}

	return ('\0');

}
