#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of four digits,
 *              separated by ", " and in ascending order.
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 5; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				for (d = c + 1; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(',');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');

					if (!(a == 5 && b == 8 && c == 9 && d == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
