#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *  main - Entry point
 *
 *  Desciption: this programm for pring random value and display result
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%u is positive\n", n);
	else if (n == 0)
		printf("%u is zero\n", n)
	else
		printf("%u is negative\n", n)
	return (0);
}
