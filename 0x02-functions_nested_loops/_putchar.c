#include <unistd.h>

/**
 * _putchar - writes character c into stdout
 * @c: The character printed
 * Return: Always 1 (Success)
 * on error, -1mreturned, and errno set approriatley.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));

}
