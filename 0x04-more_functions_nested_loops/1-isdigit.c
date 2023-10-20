#include "main.h"

/**
* _isdigit - checks if char is a digit
* @x: The number that needs to be to be checked
* Return: 1 for digit, 0 for other
*/

int _isdigit(int x)

{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
