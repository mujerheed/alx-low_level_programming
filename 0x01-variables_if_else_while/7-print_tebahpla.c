#include <stdlib.h>
#include <stdio.h>
/**
 *main- Entry point
 *Return: End point
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
