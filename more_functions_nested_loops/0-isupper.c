#include "main.h"
/**
* _isupper - checking uppercase characters
* Description: Write a function that check uppercase characters
* @c: The character to check
* Return: 1 if the character is uppercase, 0 otherwise.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
