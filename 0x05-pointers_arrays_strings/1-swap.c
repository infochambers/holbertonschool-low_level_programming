#include "holberton.h"

/**
 * swap_int --  a function that swaps the values of two integers.
 *
 * @a: incoming number
 * @b: incoming number
 * @c: storing number
 *
 *
 * Return: Always 0 (Success)
 *
 */

void swap_int(int *a, int *b)
{

	int *c;

	c = 0;

	*c = *a;
	*a = *b;
	*b = *c;

return;

}
