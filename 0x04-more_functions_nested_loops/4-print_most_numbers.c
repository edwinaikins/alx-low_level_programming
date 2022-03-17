#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 but ommits 2 and 4
 * description
 * Return: nothing
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50 && a != 52)
			_putchar(a);
	}
	_putchar('\n');
}
