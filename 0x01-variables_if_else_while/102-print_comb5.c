#include <stdio.h>

/**
 * main - Enrty
 * Return: Always 0
 */
int main(void)
{
	int c = 0;
	int f_d;
	int l_d;

	int c2;
	int f_d2;
	int l_d2;

	while (c <= 98)
	{
		d_f = (c / 10 + '0');
		l_d = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			f_d2 = (c2 / 10 + '0');
			l_d2 = (c2 & 10 + '0');

			if (c < c2)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				patchar(f_d2);
				putchar(l_d2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
