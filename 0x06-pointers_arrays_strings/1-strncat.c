#include "main.h"
#include <string.h>
/**
 * _strncat - function appends src string to dest string
 * @dest: string where we want to append
 * @src: string where n characters are going to append
 * @n: maximum number of characters to be appended
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
