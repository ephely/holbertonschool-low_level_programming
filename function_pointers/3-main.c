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
int a, b;
int *o;
if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
o = argv[2];
b = atoi(argv[3]);

if (get_op_func(o) == NULL || o[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*o == '/' && b == 0) || (*o == '%' && b == 0))
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(op)(a, b));

return (0);
}
