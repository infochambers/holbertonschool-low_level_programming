#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{

		char achar;
		int anint;
		long int along;
		long long int alonglong;
		float afloat;
				
		printf("Size of a char: %ld byte(s)\n", sizeof(achar));
		printf("Size of an int: %ld byte(s)\n", sizeof(anint));
		printf("Size of a long int: %ld byte(s)\n", sizeof(anint));		
		printf("Size of a  long long int: %ld byte(s)\n", sizeof(alonglong));
		printf("Size of a float: %ld byte(s)\n", sizeof(afloat));



		return (0);
	}
