#include "holberton.h"

/**
 * _strstr -- a function that searches a string for
 * any of a set of bytes.
 *
 * @haystack: incoming characters
 * @needle: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

char *_strstr(char *haystack, char *needle)
{

	int count1, count2;

	for (count1 = 0 ; haystack[count1] != '\0' ; count1++)
	{
		for (count2 = 0 ; needle[count2] != '\0' ; count2++)
		{
			if (haystack[count1] == needle[count2])
			{
				return (needle);
			}
		}
	}

	return ('\0');

}
