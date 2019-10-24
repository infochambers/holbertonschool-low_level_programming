#include "holberton.h"

/**
 * print_name --  a function that prints a name.
 *
 * @name: incoming parameter
 * @f: incoming parameter
 *
 * Return: Always 0 (Success)
 *
 */

void print_name(char *name, void (*f)(char *))
{

	int loop;

	for (loop = 0 ; loop != '\n' ; loop++)
	{
		_putchar(*name[loop]);
	}

return;

}
