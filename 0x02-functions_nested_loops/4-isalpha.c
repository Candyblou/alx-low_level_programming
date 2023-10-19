#include "main.h"
/**
 * _isalpha - Check if a character is an alphabetic character (a-z or A-Z).
 * @c: The character to check
 * Return 1 for alphabetic character or 0 for other
 */

int _isalpha(int c);

{
	if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
