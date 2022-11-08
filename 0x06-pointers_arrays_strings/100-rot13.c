#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @n: string to be encoded.
 * Return: pointer to the encoded string
 */
char *rot13(char *n)
{
	int i, j;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotkey[52] = {
			     'n', 'o', 'p', 'q', 'r', 's',
			     't', 'u', 'v', 'w', 'x', 'y',
			     'z', 'a', 'b', 'c', 'd', 'e',
			     'f', 'g', 'h', 'i', 'j', 'k',
			     'l', 'm', 'N', 'O', 'P', 'Q',
			     'R', 'S', 'T', 'U', 'V', 'W',
			     'X', 'Y', 'Z', 'A', 'B', 'C',
			     'D', 'E', 'F', 'G', 'H', 'I',
			     'J', 'K', 'L', 'M'
			   };
	for (i = 0; n[i] != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == alpha[j])
			{
				n[i] = *(rotkey + j);
				break;
			}
		}
	}

	return (n);
}
