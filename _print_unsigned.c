#include "main.h"

/**
* _print_unsigned - prints unsigned integer to the appropriate base
* @n: integer
*
* by: laylo & Mega
* Return: numbers in the appropriate base
*/

int _print_unsigned(unsigned int n, int base, char *digit)
{
	int cmp = 0;

	if (n / base)
		cmp += _print_unsigned(n / base, base, digit);

	cmp += _putchar(digit[n % base]);
	return (cmp);
}
