#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: Takes in anteger type input for function
 *
 * Return: Alwayls 0 (seccess)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
