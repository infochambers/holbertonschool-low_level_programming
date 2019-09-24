#include "holberton.h"

/**
 * _abs --   a function that computes the absolute value of an integer.
 *
 *
 *@int: the character
 *
 *
 * Return: Always 0 (Success)
 *
 */

int _abs(rebnum)
{

	int rebnum;

	if (rebnum < 0)
	{
		rebnum = -rebnum;
	}

	_putchar(rebnum);

	return (0);
}
