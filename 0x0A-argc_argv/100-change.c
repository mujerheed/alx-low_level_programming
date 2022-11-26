#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument number
 * @argv: Argument array
 *
 * Return: Always 0 for successful exit else 0 for error
 */

int main(int argc, char **argv)
{
	int index = 0, coin = 0, conv, temp;
	int arr[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	conv = atoi(*(argv + 1));

	if (conv > 0)
	{
		while (index < 5)
		{
			temp = conv / arr[index];
			conv = conv - (temp * arr[index]);
			coin += temp;
		
			index++;
		}
	}
	else
	{
		_putchar('0');
		_putchar('\n');
		return (1);
	}
	printf("%d\n", coin);

	return (0);
}
