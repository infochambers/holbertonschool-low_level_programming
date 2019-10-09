#include "holberton.h"

/**
 * _strspn -- a function that gets the length of a prefix substring.
 *
 * @s: incoming characters
 * @accept: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

unsigned int _strspn(char *s, char *accept)
{

	int count1, count2, tally = 0;

	for (count1 = 0 ; s[count1] != ' ' ; count1++)
	{
		for (count2 = 0 ; accept[count2] != '\0' ; count2++)
		{
			if (s[count1] == accept[count2])
			{
				tally++;
			}
		}
	}

	return (tally);

}
