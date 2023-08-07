#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * using at most n bytes from src
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int r;
	int i;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[r] = src[i];
		r++;
		i++;
	}
	dest[r] = '\0';
	return (dest);
}
