#include <stdio.h>

/**
 *main - Entry point
 *Return: Return integer value
*/
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
