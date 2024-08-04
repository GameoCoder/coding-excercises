/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/ELHP
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
    while ((x < 1 || x > 100) || (y < 1 || y > 100));

    if (x >= 2*y)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
