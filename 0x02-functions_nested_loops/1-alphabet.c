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
	char harray[27] = "abcdefghijklmnopqrstuvwxyz";

	for (loop = 0 ; loop <= 26 ; loop++)
	{
		_putchar(harray[loop]);
	}

	_putchar('\n');


		return;
	}
