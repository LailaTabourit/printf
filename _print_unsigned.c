#include "main.h"

/**
* _print_unsigned_int - prints unsigned integer to the appropriate base
* @n: integer
* @base: base
* @digit: digits of base
*
* by: laylo & Mega
* Return: numbers in the appropriate base
*/

int _print_unsigned_int(unsigned int n, int base, char *digit)
{
	int cmp = 0;

	if (n / base)
		cmp += _print_unsigned_int(n / base, base, digit);

	cmp += _putchar(digit[n % base]);
	return (cmp);
}
