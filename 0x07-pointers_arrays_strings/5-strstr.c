#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: string bytes
 * @needle: substring bytes
 * Return: pointer to the beginning of the located substring,
 *NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != 0)
	{
		a = 0;

		if (*(haystack + a) == *(needle + a))
		{
			while (needle[a] == haystack[a])
			{
				if (*(needle + (a + 1)) == 0)
					return (haystack);
				++a;
			}
		}
		haystack++;
	}
	return (0);
}
