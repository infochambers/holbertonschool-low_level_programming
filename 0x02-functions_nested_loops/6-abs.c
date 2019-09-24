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

int _abs(int rebnum)
{

	if (rebnum < 0)
	{
		rebnum = -rebnum;
	}


	return (rebnum);
}
