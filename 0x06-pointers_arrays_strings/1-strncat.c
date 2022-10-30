#include "main.h"
#include <string.h>

/**
  * _strncat - concatenate 2 string
  * @dest: destination to concat
  * @src: source to concat
  * @n: amount of places
  * Return: value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, len = strlen(dest);

	while (a < n && src[a] != '\0')
	{
		dest[len + a] = src[a];
		a++;
	}
	dest[len + a] = '\0';

	return (dest);
}
