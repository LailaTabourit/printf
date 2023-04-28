#include "main.h"

/**
* _print_rev - reverse the string entered
* @list : argument
* by: lailitaa
* Return: the reversed string
*/
int _print_rev(char *c)
{
	int n, cmp;

	cmp = _strlen(c);

	for (n = cmp - 1; n >= 0; n--)
		_putchar(c[n]);

	return (cmp);
}
