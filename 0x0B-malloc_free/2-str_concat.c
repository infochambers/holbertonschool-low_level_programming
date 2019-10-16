#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat -- a function that concatenates two strings.
 *
 * @s1: incoming characters
 * @s2: incoming characters
 *
 *
 * Return: Always 0 (Success)
 *
 */

char *str_concat(char *s1, char *s2)
{

	char *gnitrs;
	int count = 0, count2, first;


	for (count = 0, first = 0 ; s1[count] != '\0' ; count++, first++)
	{}
	for ( ; s2[count] != '\0' ; count++)
	{}

	gnitrs = malloc(sizeof(char) * count);

	for (count2 = 0 ; count2 <= first ; count2++)
	{
		gnitrs[count2] = s1[count2];
	}

		for (count2 = 0 ; count2 <= count ; count2++)
	{

		gnitrs[count2] = s2[count2];
	}

return (gnitrs);

}
