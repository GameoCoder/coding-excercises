/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/WATERCONS
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
    while (t < 1 || t > 2000);
    for (int i = 0; i < t; i++)
    {
        do
        {
            scanf("%i", &x);
        }
        while (x < 1 || x > 4000);
        if (x >= 2000)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
