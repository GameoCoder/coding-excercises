/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/BURGERS
  Date - Aug 4 2024
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
        }
        while ((a < 1 || a > 100000) || (b < 1 || b > 100000));
        if (a < b)
        {
            printf("%i\n", a);
        }
        else if (a > b)
        {
            printf("%i\n", b);
        }
        else
        {
            printf("%i\n", a);
        }
    }

}
