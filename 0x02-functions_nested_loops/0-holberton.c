#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{

	int loop, harray[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	for (loop = 0 ; loop <= 8 ; loop++)
	{
		_putchar(harray[loop]);
	}

	_putchar('\n');

		return (0);
	}
