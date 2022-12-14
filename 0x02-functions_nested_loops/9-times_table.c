#include "main.h"

/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int num, mul, prod;

	for (num = 1; num <= 9; num++)
	{
		_putchar('0')
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			prod = mul * num;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
