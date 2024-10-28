#include "main.h"
/**
* _isdigit - check for digit
* Write a function that checks for a digit (0 through 9).
* @c: The number to be treated
* Return: Value of the last digit of number
*/
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
