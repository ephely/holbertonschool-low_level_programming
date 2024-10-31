#include "main.h"
/**
* _strlen - swap 2 int
* Write a function that returns the length of a string.
* @s: char
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

