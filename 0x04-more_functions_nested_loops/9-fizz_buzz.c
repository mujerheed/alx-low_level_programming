#include "main.h"

/**
 * main - program that prints the numbers from 1 to 100
 * multiple of 3 is Fizz, for 5 is Buzz and 3/5 FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
