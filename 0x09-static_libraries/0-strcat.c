#include "main.h"

/**
 * *_strcat - Function that concatenates Two string
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointrt to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*iterate though each src array value without the nill byte*/
	for (c2 = 0; src[c2] ; c2++)
		/* append src(c2) to dest(c) while overwritting the null byte in dest*/
	dest[c++] = src[c2];

	return (dest);
}
