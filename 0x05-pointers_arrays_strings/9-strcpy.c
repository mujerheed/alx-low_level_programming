#include "main.h"
#include <string.h>

/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @dest: where to store the array
 * @src: the array to be copied
 * Return: the arrays in the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = *(src + i);
	}
	return (dest);
}
