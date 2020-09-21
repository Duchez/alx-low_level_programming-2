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
void putnchar(int num)
{
	if (num == 0){
		putchar(48);
		return ;
	}
	int length = numLength(num);
	int j = length - 1;
	while (j >= 0)
	{
		//printf("tmp-->%i , char-->%i\n",tmp,tmp/powB(10,j)+48);
		if (num % powB(10,j) == 0 && j != 0){
			putchar(48 + num / powB(10, j));

			int k;
			for (k=j;k>0;k--)
			{
				putchar(48);

			}
			j=-1;
		}
		else
		{
			int digit1 = num / powB(10, j);
			putchar(digit1 + 48);

			int tmp2 = num;
			num -= powB(10, j) * digit1 ;
			if (numLength(tmp2) - numLength(num) == 2)
			{
				putchar(48);
				j--;
			}
			j--;
		}
	}

}
void print_to_98(int n)
{

	int i,j;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			if (i < 0)
			{
				putchar('-');
				putnchar(-1 * i);
			}else
			{
				putnchar(i);
			}
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			putnchar(i);
			putchar(',');
			putchar(' ');
		}
	}
	putchar(48+9);
	putchar(48+8);
	putchar('\n');
}

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return 0;
}
