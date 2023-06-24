#include "main.h"
#include <stdio.h>
/**
  * _putchar - writes the character c to standard output
  * @c print character
  *
  * Return: 1 on Success
  * Return: -1 on error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
