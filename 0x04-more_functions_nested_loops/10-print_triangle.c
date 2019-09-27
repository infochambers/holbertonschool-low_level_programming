#include "holberton.h"

/**
 * print_triangle --  a function that prints a triangle,
 * followed by a new line.
 *
 * @size: incoming number
 *
 * Return: Always 0 (Success)
 *
 */

void print_triangle(int size)
{

	//~ int sqhigh, sqwide, space, shape;
	int sqhigh, space, shape;

	for (sqhigh = 0 ; sqhigh < size ; sqhigh++)
	{
		if (size > 0)
		{
			//~ for (sqwide = 1 ; sqwide <= size ; sqwide++)
			//~ {
					for (space = size - 1 ; space > 0 ; space--)
					{
					_putchar('.');
					}

					for (shape = 1 ; shape < size ; shape++)
					{
					_putchar('#');
					}
			//~ }
		}
		_putchar('\n');
	}
}
