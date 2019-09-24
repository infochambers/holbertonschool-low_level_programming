#include "holberton.h"

/**
 * print_alphabet -- a function that prints the
 * alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 *
 */

void print_alphabet(void)
	{

	int loop;
	char harray[26] = "abcdefghijklmnopqrstuvwxyz";

	for (loop = 0 ; loop <= 25 ; loop++)
	{
		_putchar(harray[loop]);
	}

	_putchar('\n');


		return;
	}
