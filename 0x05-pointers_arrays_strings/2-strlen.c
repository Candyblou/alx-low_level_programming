#include <stdio.h>

/**
 * _strlen - Returns string length
 * @str: The string whos length is being determined
 * Return: strings lemgth
 */

size_t _strlen(const char *str)

{

size_t length = 0;

while (*str++)
length++;
return (length);
}
