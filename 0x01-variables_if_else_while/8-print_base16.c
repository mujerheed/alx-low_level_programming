#include <stdio.h>

/**
 *main - Entry point
 *Return: Return integer value
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	char a = 'a';

	do {
		putchar(a);
		a++;
	} while (a <= 'f');
	putchar('\n');
	return (0);
}
