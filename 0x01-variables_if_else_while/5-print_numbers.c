#include <stdio.h>

/**
 *main - Entry point
 *Return: Return integer value
*/
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
