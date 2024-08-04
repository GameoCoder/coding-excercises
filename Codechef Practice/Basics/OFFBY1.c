/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/OFFBY1
  Date - Aug 4 2024
*/
#include <stdio.h>

int main(void)
{
    int a, b;
    do
    {
        scanf("%i %i", &a, &b);
    }
    while ((a < 1 || a > 50) || (b < 1 || b > 50));
    printf("%i1\n", a + b);
}
