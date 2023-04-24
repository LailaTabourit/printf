#include "main.h"

/**
* _print_string - print a string
* @s : the string to print
* @x : a hexadecimal (base 16) integer
* @X : a hexadecimal (upper case)
* by: Lailila and Megato
* Return: string
*/

int _print_string(char *s, char __attribute__((unused)) *x, char *X)
{
	int i, cmp = 0;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			cmp += 2;
			if (s[i] < 16)
				cmp += _putchar('0');
			cmp += _print_unsigned_int((unsigned int)s[i], 16,X);
		}
		else
			cmp += _putchar(s[i]);
	}
	return (cmp);
}
