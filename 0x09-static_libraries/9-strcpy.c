#include "main.h"

/**
 * char *_strcpy - the program copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int q = 0;

	while (*(src + t) != '\0')
	{
		t++;
	}
	for ( ; q < t ; q++)
	{
		dest[q] = src[q];
	}
	dest[t] = '\0';
	return (dest);
}
