#include "main.h"

/**
 * _adresse - adresse in memory
 * @n : number
 * @base : base in Hexa
 * Return : count
 */

int _adresse(long int n, char *base)
{
	int cmp;

	cmp = 0;
	if (n >= 12)
	{
		cmp += _adresse(n / 16, base);
		cmp += _adresse(n % 16, base);
	}
	else
		cmp += _putchar(base[n]);
	return (cmp);
}
