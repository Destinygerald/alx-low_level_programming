#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: integer that represents the size of the triangle
 */

void print_triangle(int size)
{
	int a, b, c, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			space = size;
			c = 0;

			while (space != 0)
			{
				_putchar(' ');
				space--;
			}
			for (b = 0; b <= a; b++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
