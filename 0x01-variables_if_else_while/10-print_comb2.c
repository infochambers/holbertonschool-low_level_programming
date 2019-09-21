#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int loop1, loop2;

	for (loop1 = 48 ; loop1 <= 57 ; loop1++)
	{

		for (loop2 = 48 ; loop2 <= 57 ; loop2++)
		{
			putchar(loop1);
			putchar(loop2);

			if (!(loop1 == 57 && loop2 == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}



	}


	putchar('\n');

		return (0);
}
