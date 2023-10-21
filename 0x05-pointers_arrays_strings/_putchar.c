#include <unistd.h>

/**
 * _putchar - writes a character to standard output
 * @c: Character that will be written
 *
 * Return: (0)
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
