#include <stdio.h>
#include "holberton.h"

/**
 * print_array -- a function that prints n elements of an
 * array of integers, followed by a new line.
 *
 * @a: incoming string
 * @n: incoming count
 *
 *
 * Return: Always 0 (Success)
 *
 */

void print_array(int *a, int n)
{

	int count;

	for (count = 1; count <= n ; count++)
	{
		printf("%d", a[count - 1]);

	if (!(count == n))
	{
		printf(", ");
	}

	}

		printf("\n");

}
