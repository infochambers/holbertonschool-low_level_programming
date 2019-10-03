#include "holberton.h"
#include <stdio.h>

/**
 * _strcat --  a function that concatenates two strings.
 *
 * @dest: incoming characters
 * @src: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

char *_strcat(char *dest, char *src)
{

	char first[98];
	int count, increment;

	for (count = 0, increment = 0; dest[count] != '\0' ; count++, increment++)
	{
		first[count] = dest[count];
	}

	count = 0;
	increment += 1;

	for (count = 0 ; src[count] != '\0' ; count++)
	{
		first[increment] = dest[count];
	}


	*dest = *first;

return (dest);

}
