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
	int i = 1, d, add = 0;

	while (i < argc)
	{
		for (d = 0; argv[i][d] != '\0'; d++)
		{
			if (argv[i][d] < '0' || argv[i][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(*(argv + i));
		++i;
	}

	printf("%d\n", add);

	return (0);
}
