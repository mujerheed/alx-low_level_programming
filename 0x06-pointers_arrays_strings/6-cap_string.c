#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: string character
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int a = 0, b;
	char spe[] = {',', ';', '.', '!', ' ', '\t', '\n', '(', ')', '{', '}'};

	while (*(str + a) != '\0')
	{
		if (a == 0)
		{
			if (str[a] >= 'a' && str[a] <= 'z')
				*(str + a) -= 32;
		}
		for (b = 0; b < 13; b++)
		{
			if (str[a - 1] == spe[b])
			{
				if (str[a] >= 'a' && str[a] <= 'z')
					str[a] -= 32;
				break;
			}
		}
		a++;
	}
	return (str);
}
