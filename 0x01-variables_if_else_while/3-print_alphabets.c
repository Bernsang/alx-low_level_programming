#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the alphabet in lowercase, then uppercase
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char cases;

	for (cases = 'a'; cases <= 'z'; cases++)
{
	putchar (cases);
}

for (cases = 'A'; cases <= 'Z'; cases++)
{
	putchar (cases);
}
putchar ('\n');
return (0);

}
