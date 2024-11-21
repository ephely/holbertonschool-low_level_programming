#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - add
*
* @a: int
* @b: int
*
* Return: a + b
*/

int op_add(int a, int b)
{
return (a + b);
}


/**
* op_sub - sub
*
* @a: int
* @b: int
*
* Return: a - b
*/

int op_sub(int a, int b)
{
return (a - b);
}


/**
* op_mul - miltiply
*
* @a: int
* @b: int
*
* Return: a * b
*/

int op_mul(int a, int b)
{
return (a * b);
}


/**
* op_div - divide
*
* @a: int
* @b: int
*
* Return: a / b
*/

int op_div(int a, int b)
{
if (b == 0)
{
fprintf(stderr, "divided by zero\n");
}
return (a / b);
}


/**
* op_mod - rest of a division
*
* @a: int
* @b: int
*
* Return: a % b
*/

int op_mod(int a, int b)
{
if (b == 0)
{
fprintf(stderr, "divided by zero\n");
return (-1);
}
return (a % b);
}
