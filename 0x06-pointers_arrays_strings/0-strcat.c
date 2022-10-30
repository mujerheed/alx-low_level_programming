#include "main.h"
#include <string.h>

/**
 *_strcat - function that concatenate 2 strings array
 * @dest: destination array
 * @src: source array
 * Return: Concatenated array in dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b, len;

	len = strlen(dest);

	for (b = 0; *(src + b) != '\0'; b++)
	{
		dest[len] = src[b];
		len++;
	}
	dest[len] = '\0';
	return (dest);

}
