/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/TAXSAVING
  Date - Aug 4 2024
*/
#include <stdio.h>

int main(void)
{
    int t, x, y;
    do
    {
        scanf("%i", &t);
    }
    while (t < 1 || t > 100);

    for (int i = 0; i < t; i++)
    {
        do
        {
            scanf("%i %i", &x, &y);
        }
        while ((x < 1 || x > 100) || (y < 1 || y > 100) || (y > x));
        printf("%i\n", x-y);
    }
}
