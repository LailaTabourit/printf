include "main.h"

/**
 * _print_string - print a string
 * s : the string to print
 * x : a hexadecimal (base 16) integer
 * X : a hexadecimal (upper case)
 * by: Lailita and Megato
 * Return: string
 */

int _print_string(char *s, char *x, char *X)
{
	int i, cmp = 0

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (s[i] < 16)
				_putchar('0');
			cmp += 3 + _print_unsigned_int((unsigned int)s[i], 16, X);
		}
		else
			cmp += _putchar(s[i]);
	}
	return (cmp);
}
