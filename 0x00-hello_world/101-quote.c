#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point to the program
 *
 * Return: integer value was return
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
