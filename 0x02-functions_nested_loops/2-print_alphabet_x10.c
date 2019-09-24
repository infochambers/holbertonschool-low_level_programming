#include "holberton.h"

/**
 * print_alphabet --  a function that prints 10 times the 
 * alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 *
 */

void print_alphabet_x10(void)
	{

	int loop, loop10;
	char harray[27] = "abcdefghijklmnopqrstuvwxyz";


	for (loop10 = 0 ; loop10 <= 9 ; loop10++)
	{

		for (loop = 0 ; loop <= 26 ; loop++)
		{
			_putchar(harray[loop]);
		}

	_putchar('\n');

	}




		return;
	}
