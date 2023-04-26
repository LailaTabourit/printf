#include "main.h"

/**
* _print_bin - print the binary of an unsigned int
* @n: unsigned integer
*
* by: Me and him ^^
* Return: number of characters printed
*/

int _print_bin(unsigned int n)
{
	int cmp = 0;

	if (n / 2)
		cmp += _print_bin(n / 2);
	cmp += _putchar(n % 2 + '0');

	return (cmp);
}
