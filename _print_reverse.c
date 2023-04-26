#include "main.h"

/**
 * _rev_str - prints the reversed string
 * @list: list printed
 * made by Lailita and Megato ^^
 *
 * Return: reversed string
 */

int _print_reverse(va_list list)
{
	int i = 0, j = 0;
	char c = va_arg(list, char);

	if (!c)
		return (_print_str("null"));
	while (c[i])
	{
		i++;
	}
	while (i >= 0)
	{
		j += _putchar(c[i]);
		i--;
	}
	return (j);
}
