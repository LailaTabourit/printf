#include "main.h"

/**
* _putchar - write character into the standard output
* @c: character
*
* by: laila & zakaria
* Return: character printed
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
