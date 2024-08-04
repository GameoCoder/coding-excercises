/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/TOP10
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
    while (t < 1 || t > 100);

    for (int i = 0; i < t; i++)
    {
        do
        {
            scanf("%i", &x);
        }
        while (x < 1 || x > 100);

        if (x <= 10)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
