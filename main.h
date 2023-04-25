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

typedef struct function_type
{
    char *fmt;
    int (*op)(va_list ap, int mode);
    int mode;
} ftype;

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
int rot13(char *str);
int rev_str(char *str);
#endif
