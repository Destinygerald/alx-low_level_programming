#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 10 times
 */

void more_numbers(void)
{
	int a = 0;

	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b <= 14; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
