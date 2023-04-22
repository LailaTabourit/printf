#include "main.h"

/**
* _strlen - count the length of string
* @s: string
*
* by: lailitaa and megaa
* Return: the length
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
