#include "main.h"

/**
 * _putchar - writes out character
 * print_numbers: prints nrs from 0 to 9
 * @c: character written
 * Return: Nrs from 0 to 9
 */

int _putchar(char c);

void print_numbers(void)

{
	int x;

	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}
