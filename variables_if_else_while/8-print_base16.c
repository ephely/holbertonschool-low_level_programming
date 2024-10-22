#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char numb;
char alp;

for (numb = '0'; numb  <= '9'; numb++)
{
putchar(numb);
}
for (alp = 'a'; alp <= 'f'; alp++)
{
putchar(alp);
}
putchar('\n');

return (0);
}
