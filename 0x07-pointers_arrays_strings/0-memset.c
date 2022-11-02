#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: buffer to be stored
 * @b: constant buffer
 * @n: sizeof the memory
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int num;

	num = 0;
	while (num < n)
	{
		*(s + num) = b;
		num++;
	}

	return (s);
}
