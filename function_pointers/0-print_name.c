#include <stdio.h>

/**
* print_name - prints a name
*
* @name: char
*
* @f: void
*
*/

void print_name(char *name, void (*f)(char *))
{
if (f != NULL && name != NULL)
(*f)(name);
}
