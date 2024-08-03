/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/FLOW001
  Date - Aug 3 2024
*/
#include <stdio.h>

int main(void)
{
    int t, a, b;
    do
    {
        scanf("%i", &t);
    }
    while (t < 1 || t > 1000);

    for (int i = 0; i < t; i++)
    {
        do
        {
            scanf("%i %i", &a, &b);
            printf("%i\n", a + b);
        }
        while ((a < 0 || a > 10000) || (b < 0 || b > 10000));
    }
}
