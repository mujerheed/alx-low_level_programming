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
		if ((c != 'e') && (c != 'q'))
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}