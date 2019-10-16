#include "holberton.h"
#include <stdlib.h>

/**
 * create_array -- aa function that creates an array of
 * chars, and initializes it with a specific char.
 *
 * @size: incoming characters
 * @c: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

char *create_array(unsigned int size, char c)
{

	char *yarra;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}

	yarra = malloc(sizeof(char) * size);

	for (count = 0 ; count <= size ; count++)
	{
		yarra[count] = c;
	}

return (yarra);

}
