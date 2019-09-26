#include "holberton.h"

/**
 * times_table -- a function that prints the
 * 9 times table, starting with 0.
 *
 *
 * Return: Always 0 (Success)
 *
 */

void times_table(void)
{

	int rebnum1, rebnum2;

	for (rebnum1 = 0 ; rebnum1 <= 9 ; rebnum1++)
	{
		for (rebnum2 = 0 ; rebnum2 <= 9 ; rebnum2++)
		{
			_putchar(((rebnum1 *  rebnum2) / 10) + '0');
			_putchar(((rebnum1 *  rebnum2) % 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');

		}

		_putchar('\n');
	}

	return;
}
