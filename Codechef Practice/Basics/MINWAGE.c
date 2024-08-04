/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/MINWAGE
  Date - Aug 4 2024
*/
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        scanf("%i", &x);
    }
    while (x < 1 || x > 20);

    if (x > 11)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
