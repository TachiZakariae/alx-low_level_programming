#include "main.h"
/**
 * _print_rev_recursion - Prints a String in reverse
 * @s: Pointer to the string
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
