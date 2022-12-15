#include "main.h"

/**
 * print_square - prints a square 
 * @size: integer representing the size of the square
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (int a = 0; a < size; a++)
		{
			for (int b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
