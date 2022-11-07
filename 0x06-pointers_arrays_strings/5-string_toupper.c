#include "main.h"

/**
  * string_toupper - function that changes all lowercase letters of
  * a string to uppercase.
  * @s: strings to be entered
  * Return: uppercase characters
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		if (s[a] >= 65 && s[a] <= 90)
			s[a] = s[a];
		else if (s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
		else
			s[a] = s[a];
		a++;
	}
	return (s);
}
