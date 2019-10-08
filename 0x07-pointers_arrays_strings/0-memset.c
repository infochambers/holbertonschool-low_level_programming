#include "holberton.h"

/**
 * _memset -- a function that fills memory with a constant byte.
 *
 * @s: incoming characters
 * @b: incoming characters
 * @n: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int count;

	for (count = 0 ; count <= n ; count++)
	{
		s[count] = b;
	}

return (s);

}
