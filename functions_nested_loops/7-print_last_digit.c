#include "main.h"
/**
* print_last_digit - write the absolute value of an integer
* Write a function that prints the last digit of a number.
* @n: The number to be treated
* Return: Value of the last digit of number
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
