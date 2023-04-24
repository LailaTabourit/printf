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
#include <stdarg.h>


#define BUFF_SIZE 1024

/* --------------Prototype--------------------*/
int _check(va_list list, char c);
int helper(char c, va_list args, int count);
int _putchar(char c);
int _strlen(char *s);
int _print_str(char *str);
int _print_bin(unsigned int n);
int _print_unsigned_int(unsigned int n, int base, char *digit);
int _print_int(int n);
int _print_string(char *s, char *x, char *X);
int _printf(const char *format, ...);
#endif
