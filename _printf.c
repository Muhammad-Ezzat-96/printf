#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *_printf - homemade printf version
  *@format: the buffer string of the printf
  *Return: the number of charachters printed without the NULL statement
  */
int _printf(const char *format, ...)
{
	int i;
	va_list list;

	va_start(list, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			i = switcher(format, list, i);
		}
		else
		{
			putchar(*format);
			i++;
		}
		format++;
	}
	va_end(list);
	return (i);
}

