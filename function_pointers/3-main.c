#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - main
*
* @argc: int
* @argv: char
*
* Return: 0
*/
int main(int argc, char *argv[])
{
int a, b, result;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

operation = get_op_func(argv[2]);

if (operation == NULL)
{
printf("Error\n");
exit(99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
{
printf("Error\n");
exit(100);
}

result = operation(a, b);
printf("%d\n", result);

return (0);
}
