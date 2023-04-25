#include "main.h"

/**
 * _print_rev_str - the reverse string
 * @str: the string
 * made by megato and lailalita
 * Return: cmp
 */

int _print_rev_str(char *str)
{
	int i = 0, cmp = 0;

	if (!str)
		return (_print_str.c("(null)", 0));
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		count += _putchar(str[i]);
		i--;
	}
	return (cmp);
}

/**
 * _print_rot13 - encodes a string
 * @str: the string
 * by me and her
 * Return : cmp
 */

int _print_rot13(char *str)
{
	int i = 0, cmp = 0;

	if (!str)
		return (_print_str.c("(null)", 0));
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			count += _putchar((((str[i] - 'a') + 13) % 26) + 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			count += _putchar((((str[i] - 'A') + 13) % 26) + 'A');
		else
			count += _putchar(str[i]);
		i++;
	}
	return (cmp);
}
