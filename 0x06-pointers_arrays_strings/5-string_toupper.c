#include "main.h"

/**
 * string_toupper - Changes lowercase letters to uppercase.
 * @str: String that going to be changed.
 * Return: Pointer to string.
 *
 */
char *string_toupper(char *str)
{

	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index]<= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);

}
