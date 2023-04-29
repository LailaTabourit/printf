#ifndef MAIN_H
#define MAIN_H

/*made by Lailalita and Megato*/

#include <stdarg.h>
#include <unistd.h> /*---for write---*/
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>

#define BUFF_SIZE 1024
/*-------------------Data Structure-------------------------*/
typedef struct flag
{
	int plus;
	int space;
	int hash;
} flag_t;
/* --------------Prototype--------------------*/
int _check(va_list list, char c);
int _putchar(char c);
int _strlen(const char *s);
int _print_str(char *str);
int _print_bin(unsigned int n);
int _print_unsigned_int(unsigned int n, int base, char *digit);
int _print_int(int n);
int _print_string(char *s, char *x, char *X);
int _pt_base(unsigned long int x, char b);
int _print_pt(void *pt);
int _printf(const char *format, ...);
int _print_flag(char c, struct flag *f);
int _print_rev(char *c);
int _print_rot(char *c);
#endif
