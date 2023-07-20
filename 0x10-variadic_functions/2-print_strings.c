#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string separator
 * @n: number of argument
 * @...: integers to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "nil";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
printf("\n")
va_end(ap);
}
