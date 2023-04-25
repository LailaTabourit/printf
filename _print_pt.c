#include "main.h"

/**
* _pt_base - function convert to hexa
* @x: number
* @b: base
* by : us
* Return: hexadecimal
*/
int _pt_base(unsigned long int x, char b)
{
	int i = 0, l, n;
	char *X = "0123456789abcdef";
	char m[64];
	if (x == 0)
		return (-1);
	while (x)
	{
		n = x % 16;
		x = x / 16;
		m[i] = n;
		i++;
	}
	l = i - 1;

	while (l >= 0)
	{
		if (b == 'X')
			_putchar(X[(int)m[l]]);
		else
			_putchar(m[l] + '0');
		l--;
	}
	return (i);
}
/**
* _print_pt - print pointer
* @pt: number printed
*
* by : me and him
* Return: adresse pointer
*/

int _print_pt(void *pt)
{
	int cmp = 0;
	long int n;

	if (!pt)
	{
		cmp += _print_str("(nil)");
		return (cmp);
	}
	n = (unsigned long int)pt;
	cmp += _putchar('0');
	cmp += _putchar('x');
	cmp += _pt_base(n, 'X');
	return (cmp);
}

