#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * return: 1 if c is a digit and 0 otherwise
 * @c - the character being checked
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
