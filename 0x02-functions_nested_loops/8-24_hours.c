#include <stdio.h>

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		m = h + 1;
		while (m < 60)
		{
			putchar(h / 10);
			putchar(h % 10);
			putchar(':');
			putchar(m / 10);
			putchar(m % 10);
			m++;
		}
		putchar('\n');
	}
}
int main(void){
	jack_bauer();
	return 0;
}
