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
		if (n == -2147483648)
		{
			cmp += _putchar('2');
			n %= 1000000000;
		}

		cmp += _print_int(-n):
	}

	else if (n >= 0 && n <= 9)
		cmp += _putchar(n + '0');
	else
	{
		cmp += _print_int(n / 10);
		cmp += _print_int(n % 10);
	}
	return (cmp);
}

