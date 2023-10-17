#include "main.h"

/**
 * printf_char - prints a charchters
 * @list: the list of arguments
 * @i: the printed characters
 * Return: printed charcaters
 */

int print_char(va_list list, int i)
{
	int character = va_arg(list, int);

	_putchar(character);
	return (i + 1);
}
