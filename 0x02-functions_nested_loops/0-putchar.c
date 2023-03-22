#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Desciption: this programm for pring random value and display result
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "-putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
