#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n, i;

	n = 0;
	while (src[n] != 0)
	{
		n++;
	}
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}
