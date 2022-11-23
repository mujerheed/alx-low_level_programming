#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: destination to store the strings
 * @src: source of the strings
 * @n: number of buffers
 * Return: copied destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p = 0;

	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}

	while (p < n)
	{
		*(dest + p) = '\0';
		p++;
	}

	return (dest);
}
