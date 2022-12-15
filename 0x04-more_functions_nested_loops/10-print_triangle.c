#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: integer that represents the size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int a;
		for (a = 1; a <= size; a++)
		{
			int space = size;
			int c = 0;
			int b;

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
