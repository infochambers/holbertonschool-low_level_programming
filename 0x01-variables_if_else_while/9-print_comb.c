#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{

	int loop;

	for (loop = '0' ; loop <= '9' ; loop++)
	{
		putchar(loop);

		if (loop < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}



		return (0);
	}
