#include "holberton.h"

/**
 * _strchr --  a function that locates a character in a string.
 *
 * @dest: incoming characters
 * @src: incoming characters
 * @n: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

char *_strchr(char *s, char c)
{

	unsigned int count;

	for (count = 0 ; count <= '\0' ; count++)
	{
		if (s[count] == c)
		{
			return(c);
		}
			
		else
		{
			return('\0');
		}
	}


}
