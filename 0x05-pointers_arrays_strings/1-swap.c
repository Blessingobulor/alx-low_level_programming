#include "main.h"

/**
 * swap_int - for a function that swaps two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
