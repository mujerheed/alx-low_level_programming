#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Argument count/index
 * @argv: Argument vector/array
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[0]);
		index++;
	}

	return (0);
}
