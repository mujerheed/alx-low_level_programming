#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @sen: character string
 * Return: alphanumeric code
 */
char *leet(char *sen)
{
	int a = 0, b;
	char *leet = "aAeEoOtTlL";
	char *leetcode = "4433007711";

	while (sen[a] != 0)
	{
		b = 0;

		while (b <= 9)
		{
			if (sen[a] == leet[b])
				sen[a] = *(leetcode + b);
			b++;
		}
		a++;
	}

	return (sen);
}
