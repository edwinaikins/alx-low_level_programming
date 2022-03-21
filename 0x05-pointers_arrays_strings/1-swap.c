#include "main.h"
/**
 * swap_int - function to swap pointers
 * @a: Input of a pointer
 * @b: input of b pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

