#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h> /*---for write---*/
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>


#define BUFF_SIZE 1024

/* --------------Prototype--------------------*/
int _printf(const char *format, ...);
int _check(va_list list, char c);
int _putchar(char c);
int _strlen(char *s);
int _print_str(char *str);
int _print_bin(unsigned int n);
int _print_unsigned_int(unsigned int n, int base, char *digit);
int _print_int(int n);

#endif
