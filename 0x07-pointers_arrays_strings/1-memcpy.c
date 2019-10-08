#include "holberton.h"

/**
 * _memcpy -- a function that fills memory with a constant byte.
 *
 * @dest: incoming characters
 * @src: incoming characters
 * @n: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int count;

	for (count = 0 ; count <= n ; count++)
	{
		src[count] = *dest;
	}

return (dest);

}
