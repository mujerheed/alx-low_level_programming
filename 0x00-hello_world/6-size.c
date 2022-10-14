#include <stdio.h>

/**
 * main - entry point to the program that print size of various type.
 *
 * Return: integer value was return
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", c);
	printf("Size of a int: %d byte(s)\n", i);
	printf("Size of a long int: %d byte(s)\n", li);
	puts("Size of a long long int: %d byte(s)", lli);
	puts("Size of a float: %d byte(s)", f);
	return (0);
}
