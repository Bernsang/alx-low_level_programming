#include "main.h"
#include <stdio.h>

/**
  * _isupper - check the uppercase
  *
  * Return: Always 0 or 1
  */
int _isupper(int c)
{
	char c;
	c = 'A';
	printf("c: %d\n", c, _isupper(c));
		return (1);
	c = 'a';
	printf("c: %d\n", c, _isupper(c));
	    return (0);
}
