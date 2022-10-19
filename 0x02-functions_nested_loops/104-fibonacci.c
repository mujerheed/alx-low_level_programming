#include <stdio.h>

/**
 * main - function that print fibonacci series of first 98
 * Return: always return 0
 */
int main(void)
{
	unsigned long long int a = 1, b = 2, next;
	int i;

	printf("%llu, %llu, ", a, b);
	for (i = 1; i < 98; i++)
	{
		next = a + b;
		printf("%llu", next);
		a = b;
		b = next;
		if (i != 97)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
