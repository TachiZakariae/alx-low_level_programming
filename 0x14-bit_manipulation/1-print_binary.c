#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n);
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & lL << --bit)
		{
			_putchar('l');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
