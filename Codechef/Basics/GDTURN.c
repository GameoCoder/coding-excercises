/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/GDTURN
  Date - Aug 3 2024
*/
#include <stdio.h>

int main(void)
{
    int T, X, Y;
    do
    {
        scanf("%i", &T);
    }
    while (T < 0 || T > 100);

    for(int i = 0; i < T; i++)
    {
        do
        {
            scanf("%i  %i", &X, &Y);
        }
        while ((X < 1 || X > 6) || (Y < 1 || Y > 6));

        if (X + Y > 6)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
