#include "main.h"
/**
* _abs - Computes the absolute value of an integer.
* @n: The number to be computed.
*
* Return: Absolute value of number or zero
*/
int _abs(int n)
{
if (n < 0)
{
int a;
a = n * -1;
return (a);
}
return (n);
}
