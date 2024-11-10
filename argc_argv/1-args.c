#include <stdio.h>

/**
* main - program that prints its name
*
* @argc: int
* @argv: char
*
* Return: the return
*/

int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
argv[0] = 0;
return (0);
}
