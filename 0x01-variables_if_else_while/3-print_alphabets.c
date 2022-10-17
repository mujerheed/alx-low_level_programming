#include <stdlib.h>
#include <stdio.h>
/**
 *main- Entry point
 *Return: End point
 */
int main(void)
{
	char c, d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
