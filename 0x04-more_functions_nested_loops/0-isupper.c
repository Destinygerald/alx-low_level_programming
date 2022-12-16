#include "main.h"

/**
 * _isupper - prints if c is upper or lower case
 * returns: 1 if upper and 0 otherwise
 * @c - the integer being tested
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
