#include <stdio.h>
#include <stdlib.h>

/**
* ext - extension of the function
*
* @str: char
*
* Return: result
*/

int ext(char *str)
{
int result = 0;
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
{
return (-1);
}
result = result * 10 + (str[i] - '0');
}
return (result);
}

/**
* main - program that adds positive numbers
*
* @argc: int
* @argv: char
*
* Return: 0
*/

int main(int argc, char *argv[])
{
int s = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (int i = 1; i < argc; i++)
{
int num = ext(argv[i]);
if (num == -1)
{
printf("Error\n");
return (1);
}
s += num;
}

printf("%d\n", s);
return (0);
}
