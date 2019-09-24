#include "holberton.h"

/**
 * print_last_digit -- a function that prints the
 * last digit of a number.
 *
 *
 *@lastdig: the number
 *
 *
 * Return: lastdig (Success)
 *
 */

int print_last_digit(int lastdig)
{

	if (lastdig < 0)
	{
		lastdig = -lastdig;
	}

	lastdig = lastdig % 10;

	_putchar('0' + lastdig);

	return (lastdig);
}
