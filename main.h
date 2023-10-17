#ifndef main_h
#define main_h

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int switcher(const char *format, va_list list, int i);
int print_string(va_list list, int i);
int _putachar(char letter);

#endif
