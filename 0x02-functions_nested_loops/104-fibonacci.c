#include <stdio.h>

/**
 * main - function that print fibonacci series of first 98
 * Return: always return 0
 */
int main(void)
{
	long int a = 1, b = 2, next;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 1; i < 98; i++)
	{
		next = a + b;
		printf("%ld", next);
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
