#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup -- a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 *
 * @str: incoming characters
 * @gnitrs: new string
 *
 * Return: Always 0 (Success)
 *
 */

char *_strdup(char *str)
{

	char *gnitrs;
	int count = 0, count2;

	if (str == 0)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		count++;
	}

	gnitrs = malloc(sizeof(char) * count);

	for (count2 = 0 ; count2 <= count ; count2++)
	{
		gnitrs[count2] = str[count2];
	}

return (gnitrs);

}
