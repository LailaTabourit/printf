#include "main.h"
/**
* _print_flag - get flags
* @c : character
* @F : pointer on struct flags
*
* by : Megaa and laila
* Return: 1 if the flag is present, and 0 otherwise
*/

int _print_flag(char c, struct flag *F)
{
	int n = 0;

	switch (c)
	{
		case '+':
			F->plus = 1;
			n = 1;
			break;
		case ' ':
			F->space = 1;
			n = 1;
			break;
		case '#':
			F->hash = 1;
			n = 1;
			break;
	}
	return (n);
}
