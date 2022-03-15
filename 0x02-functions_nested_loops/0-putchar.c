#include "main.h"
/**
 * main - starts here
 * Prints something
 * Return: Always 0
 */
int main(void)
{
	char c[] = "_putchar";
	int x;
	int length = sizeof(c);
	for (x = 0; x < length; x++)
		_putchar(c[x]);
	_putchar('\n');
	return (0);
}

