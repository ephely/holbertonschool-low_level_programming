#include "main.h"
/**
* _strlen - take  the lenght
* Write a function that returns the length of a string.
* @s: char
* Return: idk
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

