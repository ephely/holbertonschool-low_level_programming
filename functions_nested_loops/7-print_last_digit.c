#include "main.h"
/**
* _abs - write the absolute value of an integer
* Write a function that computes the absolute value of an integer.
* Return: 1 if the number is above 0, 0 if it's 0, -1 otherwise.
*/
int print_last_digit(int n)
{
int binks;
binks = n % 10;
if (binks < 0)
{
binks = binks * -1;
}
_putchar(binks + '0');
return (binks);
}
