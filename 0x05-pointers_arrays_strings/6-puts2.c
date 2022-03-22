#include "main.h"
/**
 * puts2 - prints
 * @str: input
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

