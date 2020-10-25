#include "variadic_functions.h"

/**
 * print_strings - prints numbers, followed by a new line
 * @separator: separator string
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list nl;
	char *s;

	va_start(nl, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(nl, char *);
		printf("%s%s", s ? s : "nil", (separator && i != n - 1) ? separator : "");
	}
	va_end(nl);
	printf("\n");


}
