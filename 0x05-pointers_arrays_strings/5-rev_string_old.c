#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{

	int length = 0;

	while (*s){
		s++;
		length++;}
	return length;
}

/**
 * rev_string - reverses a string
 * @s: string s
 */
void rev_string(char *s)
{

	int length = _strlen(s);
	char *clone = s;
	char *tmp = malloc((length + 1) * sizeof(char));

	tmp += length;

	while (*clone)
	{
		*tmp = *clone;
		printf("%p,value-->%s, copied-->%s\n",tmp,clone,tmp);
		tmp--;
		clone++;

	}
	tmp+=1;
	//printf("before--%s",s);
	printf("TMP-->%s,s-->%s\n",tmp,s);
	*s = *tmp;
}

int main(void)
{
	char str[] = "five";
	rev_string(str);
	printf("done");
	printf("%s\n",str);
	return (0);
}
