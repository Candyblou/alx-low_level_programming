#include "main.h"
/**
 * _isalpha - Checks alphabetic character
 * @c: Character to be checked
 * Return 1 for alphabetic character or 0 for other
 */

int _isalpha(int c)

{
	if ((c >=65 && c <= 99) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}