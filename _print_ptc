#include "main.h"

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
	unsigned int n;

	if (!pt)
	{
		cmp += _print_str("(nil)");
		return (cmp);
	}
	n = (unsigned long int)pt;
	cmp += _print_str("0x");
	cmp += _print_unsigned_int(n, 16, "0123456789abcdef");
	return (cmp);
}

