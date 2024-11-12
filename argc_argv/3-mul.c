#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
int j;
int k;
int mul;

if (argc != 3)
printf("Error\n");
else
{
j = atoi(argv[1]);
k = atoi(argv[2]);
mul = j * k;
printf("%d\n", mul);
}
return (0);
}
