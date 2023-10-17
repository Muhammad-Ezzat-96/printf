#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#define buff_size 1024
/**
  *_printf - self designed printf function
  *@format: refers to the buffer string of our _printf function
  *Return: the number of charachters printed excluding the NULL statement
  */
int _printf(const char *format, ...)
{
	int counter = 0, buff_ind = 0;
	char buffer[buff_size];
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				buffer[buff_ind++] = '%';
			}
			else if (*format == 'c')
			{
				int ch = va_arg(args, int);

				buffer[buff_ind++] = ch;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				while (*str)
				{
					buffer[buff_ind++] = *str;
					str++;
				}
			}
			else
			{
				buffer[buff_ind++] = *format;
			}
		}
		format++;
	}
	_printing(buffer, &buff_ind);
	counter = counter + buff_ind;
	va_end(args);
	return (counter);
}
