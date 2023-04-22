#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("Let's try to printf a simple sentence.\n");

	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Laylo and Zakoo\n");
	_printf("%s\n", "Lailitaa and Megaa");
	_printf("%c\n", 'm');
	_printf("%d\n", 9);
	_printf("binary %b\n", 98);
	_printf("%%\n");
	return (0);
}
