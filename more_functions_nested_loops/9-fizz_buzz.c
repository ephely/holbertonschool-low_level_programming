#include <stdio.h>
#include "main.h"
/**
* main - Prints a Fizz Buzz program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int krr;

for(krr = 1; krr <= 100; krr++)
{
if (krr % 3 == 0 && krr % 5 == 0)
{
printf("FizzBuzz");
putchar(' ');
}
else if (krr % 3 == 0)
{
printf("Fizz");
putchar(' ');
}
else if (krr % 5 == 0)
{
printf("Buzz");
putchar(' ');
}
else if (krr != 3 && krr != 5)
{
printf("%d ", krr);
}
else if (krr != 100)
{
printf(" ");
}
}
return(0);
}

