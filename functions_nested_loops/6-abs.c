#include "main.h"
/**
* _abs - write the absolute value of an integer
* Write a function that computes the absolute value of an integer.
* @n: The number to be computed. 
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
