#include "main.h"
/**
 * _strcmp - Pointers compared to 2 strings
 * @s1:Points to string to be compared first
 * @s2:Points to string to be compared second
 * REturn: If1 < 2 negative difference
 * If 1 == 2, 0.
 * Iif 1 > , positive difference
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
