#include "main.h"
/**
 * _strlen - funtion to print length of string
 * @s: Input
 * Return: the length of string in int
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
