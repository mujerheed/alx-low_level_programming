#include <stdio.h>

/**
 *main- program that prints _putchar
 *Return: return 0
*/
int main(void)
{
	char letter[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}
