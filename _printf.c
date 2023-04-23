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
	int cmp = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				cmp += _putchar('%');
			cmp += _check(args, *format);
		}
		else
		{
			_putchar(*format);
			cmp++;
		}
		format++;
	}
	va_end(args);
	return (cmp);
}
