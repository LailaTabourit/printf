#include "main.h"

/**
* _print_int - prints integer into the standard output
* @n: integer
*
* by: Lailitaa & Megaa
* Return: number of characters printed
*/
int _print_int(int n)
{
	int cmp = 0;

	if (n < 0)
	{
		cmp += _putchar('-');
		n = -n;
	}

	if (n / 10)
		cmp += _print_int(n / 10);

	cmp += _putchar((n % 10) + '0');
	return (cmp);
}

