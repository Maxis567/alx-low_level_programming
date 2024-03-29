#include "main.h"

/**
 *_memcpy - a function that duplicates memory area
 *@dest: where memory is stored
 *@src: where memory is duplicated
 *@n: number of bytes
 *
 *Return: duplicated memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
