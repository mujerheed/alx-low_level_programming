#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (*argv != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
