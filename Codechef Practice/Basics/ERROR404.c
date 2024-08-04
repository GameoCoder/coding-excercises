/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/ERROR404
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
    while (x < 100 || x > 999);

    if (x == 404)
    {
        printf("NOT FOUND\n");
    }
    else
    {
        printf("FOUND\n");
    }
}
