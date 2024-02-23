#include <stdio.h>

/**
 * main-print number of argument passed.
 * @argc: number of comandline arguments.
 * @argv: pointer to an array of comand line arguments.
 * Return: 0-succes, non-zero-fail.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
