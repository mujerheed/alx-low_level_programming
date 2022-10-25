#include "main.h"

/**
  * _strlen - function that return string length
  * @s: character pointers
  * Return: strlength
  */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
		return (i);
}
