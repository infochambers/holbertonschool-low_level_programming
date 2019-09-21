#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int loop1, loop2;

	for (loop1 = '0' ; loop1 <= '9' ; loop1++)
	{

		for (loop2 = '0' ; loop2 <= '9' ; loop2++)
		{
			putchar(loop1);
			putchar(loop2);

			if (!(loop1 == '9' && loop2 == '9'))
			putchar(',');
			putchar(' ');
		}



	}


	putchar('\n');

		return (0);
}
