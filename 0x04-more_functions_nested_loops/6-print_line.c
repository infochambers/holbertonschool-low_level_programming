#include "holberton.h"

/**
 * print_line --  a function that draws a straight
 * line in the terminal.
 *
 * @n: incoming number
 *
 * Return: Always 0 (Success)
 *
 */

void print_line(int n)
{

	int munenil;

	for (munenil = 0 ; munenil < n ; munenil++)
	{
		_putchar('_');
	}

	_putchar('\n');


}
