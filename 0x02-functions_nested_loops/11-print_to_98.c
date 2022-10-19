#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * @n: collect integer value
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		putchar('\n');
	}
}
int main(void)
{
	print_to_98(-111);
	return (0);
}
