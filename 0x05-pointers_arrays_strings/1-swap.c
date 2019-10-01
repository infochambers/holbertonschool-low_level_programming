#include "holberton.h"

/**
 * swap_int --  a function that swaps the values of two integers.
 *
 * @a: incoming number
 * @b: incoming number
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */

void swap_int(int *a, int *b)
{

	int *c, what = 0;


	c = &what;

	*c = *a;
	*a = *b;
	*b = *c;

return;

}
