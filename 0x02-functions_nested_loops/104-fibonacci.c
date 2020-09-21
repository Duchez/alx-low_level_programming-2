#include <stdio.h>

int powB(int base, int power)
{
        int i, prod = 1;
        for (i = 0; i < power; i++)
        {
                prod = prod * base;
        }
        return prod;
}
int numLength(int num)
{
        int length = 0;

        while (num)
        {
                num = num / 10;
                length += 1;
        }


        return length;
}


/**
 * main - print first 98 sequences of fibo
 * Return: 0;
 */

int main(void)
{
	long unsigned int f1 = 1, f2 = 2, i = 1, tmp = 0, limit = 100000000, h;

	printf("%lu, %lu, ", f1, f2);
	while (i <= 98)
	{
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;

		if (f2 > limit)
		{
			tmp = f2 % limit;
			h = (f2 - tmp) / powB(10, numLength(f2) - 1);
		}

		(f2 > )printf("%lu", f2);
		if (i != 98){
			printf(", ");
		}
		else
			printf("\n");
		i++;

	}
	return (0);
}
