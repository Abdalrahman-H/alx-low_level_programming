#include "main.h"

/**
 * _isdigit - check if c upper
 *
 * @c: input for alphabet
 *
 * Return: 1 if its uppercase. 0 if not
 */

int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
