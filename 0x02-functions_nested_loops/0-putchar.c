#include <main.h>
/**
 * main - starts here
 * Prints something
 * Return: Always 0
 */
int main(void)
{
	char c[] = "_putchar";
	int x;

	for (x = 0; x < sizeof(c); x++)
		_putchar(c[x]);
	putchar('\n');
	return (0);
}

