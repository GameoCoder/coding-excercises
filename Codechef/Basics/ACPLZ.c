/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/ACPLZ
  Date - Aug 3 2024
*/
#include <stdio.h>

int main(void)
{
    int t;
    do
    {
        scanf("%i", &t);
    }
    while (t < 1 || t > 50);
    if (t > 35)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
