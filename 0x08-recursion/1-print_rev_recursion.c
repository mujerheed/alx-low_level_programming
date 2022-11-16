#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string pointer
 * Return: reversed strings
 */
void _print_rev_recursion(char *s)
{
	char t;
	t = strlen(s);
	if (s[t] == 0)
		_putchar(s[t]);
}

int main()
{
	char *a = "hello";
	_print_rev_recursion(a);
	return 0;
}
