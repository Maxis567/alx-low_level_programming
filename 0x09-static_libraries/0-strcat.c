#include "main.h"

/**
 *  _strcat - A function that concatenates two strings
 *  @dest: The entered value
 *  @src: The entered value
 *
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int p;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	p = 0;
	while (src[p] != '\0')
	{
		dest[k] = src[p];
		k++;
		p++;
	}

	dest[k] = '\0';
	return (dest);
}
