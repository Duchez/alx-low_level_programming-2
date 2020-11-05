#include "holberton.h"
#define BIT_SIZE 8

/**
 * powX - powers a number b to the p's power
 * @b - base
 * @p - power
 * return : return b to the power of a
 */
unsigned long int powX(int b, int p)
{
	unsigned long int ans = 1;

	while (p)
	{
		ans *= b;
		p--;
	}
	return ans;
}

/**
 * print_binary - prints the binary representation of a number
 * @n: input integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int test = powX(2, sizeof(unsigned long int) * BIT_SIZE - 1);
	int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (test)
	{
		if (!(test & n) && start)
		{
			_putchar('0');
		}
		else if (test & n)
		{
			_putchar('1');
			start = 1;
		}
		test = test >> 1;
	}

}


/*
   printf("111 & 100 - > %i\n", 7 & 4);
   printf("011 & 100 - > %i\n", 3 & 4);
   printf("sizeof long int -> %lu\n", sizeof(unsigned long int));
   printf("num -> %lu", powX(2,sizeof(unsigned long int) * 8 - 1));
 */

