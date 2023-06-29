#include "main.h"
/**
 * _strcpy - copies the string
 * @src: where strings are copied from
 * @dest: where strings are copied to
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0' a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0'
		return (dest);
}
