/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/JUSTICE
  Date - Aug 4 2024
*/
#include <stdio.h>

int main(void)
{
    int x, y;
    do
    {
        scanf("%i %i", &x, &y);
    }
    while ((x < 1 || x > 10) || (y < 1 || y > 10));

    if (x >= y)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
