#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
  * main - prints all the numbers of base 16 in lowercase
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int w;
	char ch;

	for (w = '0'; w <= '9'; w++)
	{
		putchar(w);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
