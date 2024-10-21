#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
printf("%d is greater than 5\n", n, n % 10);
else if (n == 0)
printf("%d is 0\n", n, n % 10;
else
printf("%d is is less than 6 and not 0\n", n, n % 10);
return (0);
}
