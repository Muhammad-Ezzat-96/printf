#include "main.h"
#include <unistd.h>

/**
 * _putachar - writes the character c to stdout
 * @letter: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putachar(char letter)
{
	return (write(1, &letter, 1));
}
