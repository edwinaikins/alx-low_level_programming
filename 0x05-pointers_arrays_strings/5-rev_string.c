#include "main.h"
/**
 * rev_string - reverses string
 * @s: input
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
