#include "main.h"
#include <stdio.h>
/**
  *_printing - prints the inputs
  *@buffer: the buffer string
  *@buff_ind: the buffer index
  *Return: nothing
  */
void _printing(char buffer[], int *buff_ind)
{
	int i;

	if(*buff_ind > 0)
	{
		for (i = 0; i < *buff_ind; i++)
		{
			putchar(buffer[i]);
		}
		putchar('\n');
	}
	*buff_ind = 0;
}
