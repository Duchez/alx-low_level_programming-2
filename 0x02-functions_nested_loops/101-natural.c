#include "holberton.h"
#include <stdio.h>

/**
 * sumr - returns the sum of numbers from start to end with step steps
 * @start: the first number
 * @end: the last number
 *@step:the number of  steps
 * Return: sum
 */
int sumr(int start, int end, int step)
{
	int sum = 0, i;

	for (i = start; i <= end; i += step)
	{
		sum += i;
	}
	return (sum);

}
/**
 * main - prints the sum of all numbers under 1024
 * that are divisible by 3 or 5
 * Return: 0
 */
int main(void)
{

	printf("%i\n", sumr(3,1024, 3) + sumr(5, 1024, 5));
	return (0);
}
