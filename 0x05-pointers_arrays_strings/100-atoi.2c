#include "holberton.h"
#include <stdio.h>
/**
 *mapint - maps a character to its integer form
 *@a: character to be mapped
 *Return: the integer version of the char
 */

int mapint(char a)
{
	/*
	int i = 0;
	char ic;

	if (a >= '0' && a <= '9')
	{
		for (ic = '0'; ic <= '9'; ic++, i++)
		{
			if (a == ic)
			{
				return (i);
			}
		}
	}
*/
	return ((int)a - 48);
}
/**
 * isDigit - returns true if i is a number
 * @i: integer i
 * Return: true if number, false if not
 */
int isDigit(char i)
{
	return (i >= '0' && i <= '9');
}

/**
 * _atoi - converts a string to integer
 * @s: string s
 * Return: returns parsed integer
 */
int _atoi(char *s)
{
	int num = 0, sign = 1, started = 0;/*1 for true and 0 for false*/

	while (*s)
	{
		/*if a number is already countign and a non number is found break*/
		if (started && !isDigit(*s))
			break;
		if (*s == '-')
			sign *= -1;
		if (isDigit(*s))
		{
			started = 1;
			num =  num * 10 + mapint(*s);
		}
		s++;
	}
	return (sign * num);
}
