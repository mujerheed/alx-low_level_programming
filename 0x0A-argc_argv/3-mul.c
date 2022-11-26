#include "main.h"
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: Argument number
 * @argv: Argument array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
