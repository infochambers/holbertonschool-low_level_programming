#include "holberton.h"

/**
 * print_most_numbers --  a function that prints the
 * numbers, from 0 to 9, followed by a new line.
 * Do not print 2 and 4.
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */

void print_most_numbers(void)
{

	int srebmun;

	for (srebmun = 0 ; srebmun < 10 ; srebmun++)
	{
		if (srebmun != 2)
		{
			if (srebmun != 4)
			{
				_putchar(srebmun + '0');
			}
		}
	}

	_putchar('\n');


}
