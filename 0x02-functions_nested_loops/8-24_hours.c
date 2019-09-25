#include "holberton.h"

/**
 * jack_bauer --   a function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 *
 * Return: Always 0 (Success)
 *
 */

void jack_bauer(void)
{

	int hour1, hour2, minute1, minute2;

	for (hour1 = '0' ; hour1 <= '2' ; hour1++)
	{
		for (hour2 = '0' ; hour2 < '4' ; hour2++)
		{
			for (minute1 = '0' ; minute1 < '6' ; minute1++)
			{
				for (minute2 = '0' ; minute2 <= '9' ; minute2++)
				{
					_putchar(hour1);
					_putchar(hour2);
					_putchar(':');
					_putchar(minute1);
					_putchar(minute2);
					_putchar('\n');
				}
			}
		}
	}

	return;
}
