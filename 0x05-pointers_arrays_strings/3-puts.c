#include "main.h"
/**
 * _puts - function to print some strings
 * @str: input
 * Return: nothing
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
