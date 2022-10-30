#include "main.h"
#include <math.h>

/**
 * main - program that finds and prints the largest prime factor of the number
 * Return: Always 0
 */
int main(void)
{
	long int i, num, max;

	num = 612852475143;
	while (num % 2 == 0)
	{
		num = num / 2;
	}

	for (i = 3; i <= sqrt(612852475143); i = i + 2)
	{
		while (num % i == 0)
		{
			num = num / i;
			max = num;
		}
	}
	printf("%ld \n", max);
	return (0);
}
