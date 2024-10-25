#include "main.h"
/**
* _isalpha - checking lowercase and uppercase characters
* Description: Write a function that check lowercase and uppercase characters
* @c: The character to check
* Return: 1 if the character is lowercase or uppercase, 0 otherwise.
*/
int _isalpha(int c);
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
