#include "main.h"

/**
* _printf - prints formatted strings and inputs into the standard output
* @format: format of string
*
* by: Lailitaaa & Megato
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int i = 0, cmp = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			format++;
			if (format[i] == '%')
				cmp += _putchar('%');
			cmp += _check(args, *format);
		}
		else
		{
			_putchar(format[i]);
			cmp++;
		}
		format++;
	}
	if (format[i] != '\0')
	{
		_putchar(format[i]);
		_putchar(format[i + 1]);
		cmp += 2;
	}
	else
		return (-1);
	va_end(args);
	return (cmp);
}
