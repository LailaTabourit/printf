#include "main.h"

/**
 * revstring - print the reversed string
 * @ap: string to iterate
 * @mode: usage mode
 * made by megato and lailalita
 * Return: string
 */

int revstring(va_list ap, int mode)
{
	char *s = va_arg(ap, char*);
	int n = 0, l = strlen(s);

	(void) mode;
	for (n = l - 1; n >= 0; n--)
		write(1, &s[n], 1);
	va_end(ap);
	return (1);
}

/**
 * rot13 - encodes a string
 * @s : string of chars
 * by me and her
 * Return : pointer to string
 */

char *rot13(char *s)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int a = 0, b = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (b <= 51)
		{
			if (s[a] == input[b])
			{
				s[a] = output[b];
				break;
			}
			b++;
		}
		a++;
	}
	return (s);
}
