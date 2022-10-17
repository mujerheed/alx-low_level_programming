#include <stdio.h>

/**
 *main - Entry point
 *Return: Return integer value
*/
int main(void)
{
	int a, b;

	for (int a = 0; a <= 99; a++)
	{
		for (int b = a + 1; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if ((a != 98) || (b != 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
