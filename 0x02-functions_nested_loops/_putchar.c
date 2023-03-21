#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the charachter c to stdout
 * @c: The character to print
 * Return:0n success 1.
 * 0n error, -1 is returned, and errno is appropri
 */
int _putchar(char c)

{
	return (write(1, &c, 1));

}
