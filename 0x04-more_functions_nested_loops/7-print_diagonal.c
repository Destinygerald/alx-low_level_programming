#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer that represents the length of the line
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (int a = 0; a < n; a++)
		{
			for (int b = 0; b < a; b++)
				_putchar(' ');
			_putchar('\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
