#include <stdio.h>

/**
 *main - Entry point
 *Return: Return integer value
*/
int main(void)
{
	int n = 0;
	char a;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	a = 'a';

	do {
		putchar(a);
		a++;
	} while (a <= 'f');
	putchar('\n');
	return (0);
}
