#include <stdio.h>

/**
 * swap_int - swaps thre values of two integers
 * @a: 1st integer that will be swapped
 * @b: 2nd integer that will be swapped
 *
 * Return: 0
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
