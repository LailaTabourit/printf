#include "main.h"

/**
* _print_str - writes a string into the standard output
* @str: string
*
* by: laylo a& megaa
* Return: number of characters printed
*/

int _print_str(char *s)
{
	int n = 0;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[n])
	{
		_putchar(s[n]);
		n++;
	}
	return (n);
}
