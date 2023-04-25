#include "main.h"

/**
 * ev_str - the reverse string
 * @str: the string
 * made by megato and lailalita
 * Return: count
 */

int rev_str(char *str)
{
	int i = 0;
	int count = 0;

	if (!str)
		return (_putstr("(null)", 0));
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		count += _putchar(str[i]);
		i--;
	}
	return (count);
}

/**
 * rot13 - encodes a string
 * @str: the string
 * by me and her
 * Return : count
 */

int rot13(char *str)
{
	int i = 0;
	int count = 0;

	if (!str)
		return (ft_putstr("(null)", 0));
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
	return (count);
}
