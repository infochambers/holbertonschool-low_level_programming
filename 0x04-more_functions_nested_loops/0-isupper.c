#include "holberton.h"

/**
 * _isupper -- a function that checks for uppercase character.
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */

int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}


	return (0);
}
