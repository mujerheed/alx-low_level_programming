#include <stdlib.h>
#include <stdio.h>
/**
 *main- Entry point
 *Return: End point
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
