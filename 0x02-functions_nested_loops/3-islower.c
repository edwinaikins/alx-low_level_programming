#include "main.h"
/**
 * _islower - Check Holberton
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	int x;

	for (x = 97; x < 123; x++)
	{	if (x == c)
			return (1);
		else
			return (0);
	}
}
