#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if ((a != 2) && (a != 4))
			_putchar(a);
		a++;
	}
	_putchar('\n');
}
