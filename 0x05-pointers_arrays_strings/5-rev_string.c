#include "main.h"
/**
  * rev_string - function tgat reverse a string
  * @s: string pointer
  */
void rev_string(char *s)
{
	int m;

	for (m = 8; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
int main(void)
{
	    char s[10] = "My School";

	        printf("%s\n", s);
		    rev_string(s);
		        printf("%s\n", s);
			    return (0);
}
