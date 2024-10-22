#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alp;

for (alp = 'a'; alp <= 'd'; alp++)
{
putchar(alp);
}
for (alp = 'f'; alp <= 'p'; alp++)
{
putchar(alp);
}
for (alp = 'r'; alp <= 'z'; alp++)
{
putchar(alp);
}
putchar('\n');

return (0);
}

