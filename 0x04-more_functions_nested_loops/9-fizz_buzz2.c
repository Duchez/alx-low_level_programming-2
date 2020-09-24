#include <stdio.h>

/**
 *printfizz - print the word fuzz
 *
 *
 */
void printfizz(void)
{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
}

/**
 *printbuzz - print the word buzz
 *
 *
 */
void printbuzz(void)
{
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');

}

/**
 *printfizzbuzz - print the word fizzbuzz
 *
 *
 */
void printfizzbuzz(void)
{
	printfizz();
	putchar(' ');
	printbuzz();

}
/**
 * main - prints "Fizz" for numbers divisible by 3,
 * prints "Buzz" for numbers divisible by 5,
 * prints "FizzBuzz" for numbers divisible by 3 and 5
 * for numbers 1-100
 * Return: 0;
 */
int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 15 == 0)
			printfizzbuzz();
		else if (i % 3 == 0)
			printfizz();
		else if (i % 5 == 0)
			printbuzz();
		else
			printf("%i", i);
		putchar(' ');
	}

	printbuzz();
	putchar('\n');
	return (0);
}
