#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(*(argv + i));

		if ((num > 0 || num < 0) && num != 0)
		{
			add += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);

	return (0);
}
