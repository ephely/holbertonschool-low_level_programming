#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
int sum;
int k;
int i;

sum = 0;
if (argc < 1)
printf("%d\n", 0);
while (argc-- && argc > 0)
{
for (i = 0; argv[argc][i] != '\0'; i++)
{

if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
}
k = atoi(argv[argc]);
sum += k;
}
printf("%d\n", sum);
return (0);
}
