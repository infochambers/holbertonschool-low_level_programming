#include "holberton.h"

/**
 * _strncat -- a function that concatenates two strings.
 *
 * @dest: incoming characters
 * @src: incoming characters
 * @n: incoming parameter
 *
 * Return: Always 0 (Success)
 *
 */

char *_strncpy(char *dest, char *src, int n)
{

	int count;

	for (count = 0 ; count <= n ; count++)
	{
		dest[count] = src[count];
	}

return (src);

}
