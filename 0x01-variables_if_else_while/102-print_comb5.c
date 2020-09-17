#include <stdio.h>
/**
 * main - create 2 pairs of numbers that do not repeat
 * Return:  0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = i; j < 58; j++)
		{

			for (k = j; k < 58; k++)
			{
				for (l = k; l < 58; l++)
				{
					if (i == j == k == l)
					{
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);

					putchar(',');
					putchar(' ');

				}
			}
		}

	}
	return (0);
}
