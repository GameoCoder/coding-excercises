/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/FIT
  Date - Aug 4 2024
*/
#include <stdio.h>

int main(void)
{
    int t, x;
    do
    {
        scanf("%i", &t);
    }
    while (t < 1 || t >10);
    for (int i = 0; i < t; i++)
    {
        do
        {
            scanf("%i", &x);
            printf("%i\n", 10*x);
        }
        while (x < 1 || x > 10);
    }
}
