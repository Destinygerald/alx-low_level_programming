#include "main.h"

/**
 * print_line - prints line of lenght n
 * @n: integer representing the length of the line
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (int a = 0; a < n; a++)
			_putchar('_');
		_putchar('\n');
	}
}
