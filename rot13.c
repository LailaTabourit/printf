#include "main.h"

/**
* _print_rot - prints the rot13 of string
* @c : string
*
* by: flame
* Return: the rot13 of string
*/
int _print_rot(char *c)
{
	int n = 0, s = 0;

	if (!c)
		return (_print_str(NULL));
	while (c[n])
	{
		if (c[n] >= 'a' && c[n] <= 'z')
			s += _putchar((((c[n] - 'a') +13) % 26) + 'a');
		else if (c[n] >= 'A' && c[n] <= 'Z')
			s += _putchar((((c[n] -	'A') + 13) % 26) + 'A');
		else
			s += _putchar(c[n]);
		n++;
	}
	return (s);
}

