#include <stdio.h>

/**
 * main - prints a number, followed by a new line
 * @argc: int
 * @argv: int
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
