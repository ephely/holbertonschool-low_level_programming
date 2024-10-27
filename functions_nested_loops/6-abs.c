#include "main.h"
/**
* _abs - write the absolute value of an integer
* Write a function that computes the absolute value of an integer.
* Return: 1 if the number is above 0, 0 if it's 0, -1 otherwise.
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
