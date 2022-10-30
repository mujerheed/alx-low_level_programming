#include "main.h"
#include <string.h>

char *_strcat(char *dest, char *src)
{
	int a, b, len;
	char *c;

	len = strlen(dest);

	for(a = 0; a < len; a++)
	{
		*(c + a) = dest[a];
	}

	for(b = 0; *(src + b) != '\0'; b++)
	{
		c[len] = src[b];
		len++;
	}
	c[len] = '\0';
	*dest = *c;
	return (dest);

}
int main(void)
{
	    char s1[98] = "Hello ";
	        char s2[] = "World!\n";
		    char *ptr;

		        printf("%s\n", s1);
			    printf("%s", s2);
			        ptr = _strcat(s1, s2);
				    printf("%s", s1);
				        printf("%s", s2);
					    printf("%s", ptr);
					        return (0);
}
