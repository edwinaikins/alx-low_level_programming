#include <unistd.h>

/**
 * _putchar - Entry point
 * @c: The character to print
 *
 * Return: On success 1.
 * On Error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
