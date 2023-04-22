#include "main.h"

/**
* _putchar - prints a character into the standard output
* @c: character
*
* by: Lailitaa & Megaa
* Return: the character printed, Or EOF in error case
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _printf - prints formatted strings and inputs into the standard output
* @format: format of string
*
* by: Lailitaaa & Megaa
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int i = 0;
	int cmp = 0;
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					cmp += _putchar(va_arg(list, int));
					break;
				case 's':
					cmp += _print_str(va_arg(list, char *));
					break;
				case '%':
					cmp += _putchar('%');
					break;
				case 'd':
				case 'i':
					cmp += _print_int(va_arg(list, int));
					break;
				case 'b':
					cmp += _print_bin(va_arg(list, unsigned int));
					break;
				default:
					cmp += _putchar('%');
					cmp += _putchar(format[i]);
					break;
			}
		}
		else
			cmp += _putchar(format[i]);
		i++;
	}
	va_end(list);
	return (cmp);
}

