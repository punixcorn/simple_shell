#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)

{
	int len = 0;

	while (s[len] != '\0')
		len++;

		return (len);
}

/**
 * _puts - prints a string to stdout
 * @str: the string to print
 *
 * Return: void
 */
void _puts(char *str)

{
	write(1, str, _strlen(str));
}
