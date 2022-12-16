#include "main.h"

/**
 * _isupper - prints if c is upper or lower case
 * @c - the integer being tested
 * returns: 1 if upper and 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
