#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; ++count)
	{
		printf("%s\n", *(argv + count));
	}

	return (0);
}
