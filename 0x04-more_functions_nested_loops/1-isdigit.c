#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * return: 1 if c is a digit and 0 otherwise
 * @c - the character being checked
 */

int _isdigit(int c)
{
	int a = 0;

	while (a < 10)
	{
		if (c == a)
			return (1);
		else
			return (0);
		a++;
	}
	_putchar('\n');
}
