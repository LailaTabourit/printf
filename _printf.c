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

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				cmp += _putchar('%');
			cmp += _check(args, format[i]);
		}
		else
			cmp += _putchar(format[i]);

		i++;
	}
	va_end(args);

	return (cmp);
}
