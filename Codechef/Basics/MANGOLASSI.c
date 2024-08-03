/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/MANGOLASSI
  Date - Aug 3 2024
*/
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        scanf("%i", &x);
        if (x > 35)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    while (x < 1 || x > 50);
}
