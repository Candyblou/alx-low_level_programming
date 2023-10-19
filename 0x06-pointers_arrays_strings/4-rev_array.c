#include "main.h"

/**
 * reverse_array - Reverses arry contant of integars
 * @a: integars to be reversed
 * @n: nr of elements in array
 *
 */

void reverse_array(int *a, int n)

{
	int tmp, index;

	for (index = n -1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
