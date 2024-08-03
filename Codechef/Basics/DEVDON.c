/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/DEVDON
  Date - Aug 3 2024
*/
#include <stdio.h>

int main(void)
{
    int x, y;
    do
    {
        scanf("%i %i", &x, &y);
    }
    while ((x < 1 || x > 10) || (y < 200 || y > 300));
    printf("%i\n", x*y);
}
