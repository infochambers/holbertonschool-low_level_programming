#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{

	int loop;

	for (loop = 'a' ; loop <= 'z' ; loop++)
	{
		if ( !(loop == 'e') )
		{
			if ( !(loop == 'q') )
			{
				putchar(loop);
			}
		}
	}

	putchar('\n');

		return (0);
	}
