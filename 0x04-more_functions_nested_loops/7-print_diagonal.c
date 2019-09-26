#include "holberton.h"

/**
 * print_diagonal --  a function that draws a diagonal
 * line on the terminal.
 *
 * @n: incoming number
 *
 * Return: Always 0 (Success)
 *
 */

void print_diagonal(int n)
{

	int munenil, ecaps;

	for (munenil = 0 ; munenil < n ; munenil++)
	{
		if (n > 0)
		{
			for (ecaps = 1 ; ecaps <= munenil ; ecaps++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}

	_putchar('\n');

}
