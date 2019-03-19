#ifndef HOLBERTON
#define HOLBERTON
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct pf - Struct pf
 *
 * @char_t: The operator
 * @f: The function associated
 */
typedef struct pf
{
	char *char_t;
	int (*f)(va_list);
} pf_t;
int _printf(const char *format, ...);
int string(va_list mylist);
int only_char(va_list mylist);
int digit(int n);
int _putchar(char c);
#endif
