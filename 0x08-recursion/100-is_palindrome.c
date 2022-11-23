#include "main.h"

/**
 * _pal - function to check both start and end of str
 * @str: strings to be checked
 * @a: first index
 * @b: last index;
 * Return: 1 if the char are the same else 0
 */
int _pal(char *str, int a, int b)
{
	if (a == b)
		return (1);

	if (str[a] != str[b])
		return (0);

	if (a < b + 1)
		return (_pal(str, a + 1, b - 1));

	return (1);
}

/**
 * is_palindrome - function that check if string is palindrome
 * @s: string passed
 * Return: 1 if string palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);

	return (_pal(s, 0, len - 1));
}
