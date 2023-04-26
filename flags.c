#include "main.h"
/**
* _print_flag - get flags
* @c : character
* @f : pointer on struct flags
*
* by : Megaa and laila
* Return: 1 if the flag is present, and 0 otherwise
*/

int _print_flag(char c, struct flag *f)
{

	switch (c)
	{
		case '+':
			f->plus = 1;
			return (1);
		case ' ':
			f->space = 1;
			return (1);
		case '#':
			f->hash = 1;
			return (1);
		default:
			return (0);
	}
}
