#include "holberton.h"

/**
 * _isalpha --  a function that checks for alphabetic character.
 *
 *
 *@c: the character
 *
 *
 * Return: Always 0 (Success)
 *
 */

int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (c);
}
