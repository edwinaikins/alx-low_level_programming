#include "main.h"
/**
 * _isdigit - checks if parameter is a digit from 0 - 9.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
