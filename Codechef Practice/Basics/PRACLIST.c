/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/PRACLIST
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
    while ((x < 1 || x > 1000) || (y < 1 || y > 1000) || (y > x));
    printf("%i\n", x - y);
}
