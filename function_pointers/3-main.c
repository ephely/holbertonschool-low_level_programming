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
int (*o)(int, int);

int *o;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1] != '\0')
a = atoi(argv[1]);
o = argv[2];
b = atoi(argv[3]);
if (get_op_func(o) == NULL || o[1] != '\0')
{
printf("Error\n");
exit(99);
}

o = get_op_func(argv[2]);
if (o == NULL)
if ((*o == '/' && b == 0) || (*o == '%' && b == 0))
{
printf("Error\n");
exit(99);
exit(100);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
printf("%d\n", get_op_func(op)(a, b));

printf("%d\n", o(a, b));
return (0);
}
