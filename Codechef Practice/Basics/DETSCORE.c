/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/DETSCORE
  Date - Aug 4 2024
*/
#include <stdio.h>

int main(void)
{
    int t, x, n;
    int a = 0;
    do
    {
        scanf("%i", &t);
    }
    while (t < 1 || t > 100);

    for (int i = 0; i < t; i++)
    {
        do
        {
            scanf("%i %i", &x, &n);
        }
        while ((x < 10 || x > 200) || (n < 0 || n > 10) || (x % 10 != 0));
        printf("%i\n", (x/10)*n);
    }
}
