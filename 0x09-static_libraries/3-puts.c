#include "main.h"

/**
 * _puts - program that prints a string to stdout.
 * @str: the string to be printed.
 * _putchar prints a new line.
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
