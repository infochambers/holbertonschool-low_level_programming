#include "holberton.h"

/**
 * print_square --  a function that prints a
 * square, followed by a new line.
 *
 * @size: incoming number
 *
 * Return: Always 0 (Success)
 *
 */

void print_square(int size)
{

	int sqhigh, sqwide;

	for (sqhigh = 0 ; sqhigh < size ; sqhigh++)
	{
		if (size > 0)
		{
			for (sqwide = 1 ; sqwide <= size ; sqwide++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}

	_putchar('\n');

}
