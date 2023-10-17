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
	int i = 0;

	if (format == NULL)
	return (-1);

	va_list list;

	va_start(list, format);

	while (*format != '\0')
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
