#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This progrom is print the size various of types on the computer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	printf("Sizfe of a char: %1u byte(s)\n", sizeof(char));
	printf("Sizfe of an int: %1u byte(s)\n", sizeof(int));
	printf("Sizfe of a long int: %1u byte(s)\n", sizeof(long int));
	printf("Sizfe of a long long int: %1u byte(s)\n", sizeof(long long int));
	printf("Sizfe of a float: %1u byte(s)\n", sizeof(float));
	return (0);
}
