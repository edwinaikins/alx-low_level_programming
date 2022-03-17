#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 10 times.
 * description
 * Return: nothing
 */
void print_most_numbers(void)
{
	int count = 0;
	int a;

	while (count < 10)
	{
		for (a = 0; a < 15; a++)
		{
			if ( a >= 10)
				_putchar((a / 10) + 48);
			_putchar((a % 10) + 48)
		}
		count++;
	}
	_putchar('\n');
