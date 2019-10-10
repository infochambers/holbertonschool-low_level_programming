#include "holberton.h"

/**
 * _puts_recursion --  a function that prints a string, followed
 * by a new line.
 *
 * @s: incoming characters
 *
 * Return: Always 0 (Success)
 *
 */

void _puts_recursion(char *s)
{

	unsigned int count;

	for (count = 0 ; s[count] != '\n' ; count++)
	{
		_putchar(*s);
	}


}
