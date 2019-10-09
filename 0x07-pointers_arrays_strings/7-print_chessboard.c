#include "holberton.h"

/**
 * print_chessboard -- a function that prints the chessboard.
 *
 * @a: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

void print_chessboard(char (*a)[8])
{

	int count1, count2;

	for (count1 = 0 ; count1 < 8 ; count1++)
	{
		for (count2 = 0 ;  count2 < 8  ; count2++)
		{
			_putchar(a[count1][count2]);
		}

		_putchar('\n');
	}

}
