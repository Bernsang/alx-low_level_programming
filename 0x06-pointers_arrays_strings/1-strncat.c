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
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
	}
	return (dest);
}
