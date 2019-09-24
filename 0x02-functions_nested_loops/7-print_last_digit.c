#include "holberton.h"

/**
 * print_last_digit -- a function that prints the
 * last digit of a number.
 *
 *
 *@lastdig: the character
 *
 *
 * Return: Always 0 (Success)
 *
 */

int print_last_digit(int lastdig)
{

	if (lastdig < 0)
	{
		lastdig = -lastdig;
	}

	lastdig = lastdig % 10;


	return (lastdig);
}
