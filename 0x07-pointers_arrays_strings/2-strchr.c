#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to variable
 * @c: character
 *
 * Return: c if character is found or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
	{
		s += b;
		return (s);
	}
	}

	return ('\0');
}
