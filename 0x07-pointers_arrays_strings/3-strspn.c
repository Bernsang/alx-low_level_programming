#include "main.h"
/**
 * _strspn - function that gets the length of a prefix
 * substring
 * @s: number of bytes in the initial segment
 * @accept: bytes in the initial segment
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

	while (s[b] != 32)
	{
		if (accept[a] == s[b])
	{
		t++;
	}
		b++;
	}
		a++;
	}

	return (t);
}
