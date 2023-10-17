#include "main.h"
#include <stdio.h>
int main(void)
{
	char letter = 'A';
	char string[] = "hello world";

	_printf("charachter printed %c\n", letter);
	_printf("precentage printed %%\n");
	_printf("string printed %s", string);

	return (0);
}
