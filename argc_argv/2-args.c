#include <stdio.h>

/**
* main - prints all arguments it receives
*
* @argc: int
* @argv: char
*
* Return: the return
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return ('O');
}
