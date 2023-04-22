#include "main.h"

/**
* _print_str - writes a string into the standard output
* @str: string
*
* by: laylo a& megaa
* Return: number of characters printed
*/
int _print_str(char *str)
{
	return (write(1, str, _strlen(str)));
}
