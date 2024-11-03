#include "main.h"

/**
* _atoi - Convert string to an integer
* Write a function that convert a string to an integer
* @s: Pointer
*
* Return: void
*/


int _atoi(char *s)
{
int at = 1;
unsigned int number = 0;
int i = 0;


while (s[i] == ' ')
{
i++;
}

while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
{
at *= -1;
}
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
number = (number * 10) + (s[i] - '0');
i++;
}

return (at * number);
}
