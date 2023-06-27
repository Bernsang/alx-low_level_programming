#include "main.h"
#include <stdio.h>
/**
  * _put - prints a string, followed by a new line, to stdout
  *
  * @str: string
  * Return: string then a new line
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}
	_putchar ('\n');
}

