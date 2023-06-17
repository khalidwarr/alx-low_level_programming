#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 in lowercase,
 *              followed by a new line.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int number;
	char digit;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)
			digit = number + '0';
		else
			digit = number - 10 + 'a';

		putchar(digit);
	}

	putchar('\n');

	return (0);
}
