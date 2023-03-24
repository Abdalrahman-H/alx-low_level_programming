#include "main.h"

/**
 * print_numbers - print 0 - 9
 *		only using _putchar twice
 * Return: the number since 0 up to 9
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
