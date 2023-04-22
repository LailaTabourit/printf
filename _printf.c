#include "main.h"

/**
* _printf - prints formatted strings and inputs into the standard output
* @format: format of string
*
* by: Lailitaaa & Megaa
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int i = 0, cmp = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				cmp++;
			}
			else
			{
				cmp++;
				cmp += _check(args, format[i]);
			}
		}
		else
		{
			_putchar(format[i]);
			cmp++;
		}
		i++;
	}
	va_end(args);

	return (cmp);
}
