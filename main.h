#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


int _printf(const char *format, ...);
int (*test(const char*))(va_list);


/**
 * struct func - specifier to printer
 * @c: character to compare
 * @f: function to handle printing
 */
 typedef struct func
{

	char *c;
	int (*f)(va_list);
} func_c;


int print_char(va_list);
int print_str(va_list);
int print_cent(va_list)

#endif
