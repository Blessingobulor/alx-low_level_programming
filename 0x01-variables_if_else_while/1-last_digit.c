#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -Disturbing
 *
 * Return: 0
 */
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
priintf(last digit of % d ", n, m);
if (m > 5)
{
prntf("and is greater than 5");
}
if (m == 0)
printf("and is 0");
}
if (m < 6 && m != 0)
{
printf("and is less than 6 and not 0");
}
printf("\n");
return (0);
}
