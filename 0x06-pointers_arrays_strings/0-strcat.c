#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @src: source
 * @dest: destination
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
