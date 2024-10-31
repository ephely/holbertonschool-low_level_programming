#include "main.h"
/**
* swap_int - swap 2 int
* Write a function that swaps the values of two integers.
* @a: 1st int
* @b: 2nd int
*/

int _strlen(char *s)
{
int compte = 0;

while (*s != '\0')
{
compte++;
s++;
}
return (compte);
}

