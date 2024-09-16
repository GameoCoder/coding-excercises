/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/AVGPROBLEM
  Date - Sep 16 2024
*/
#include <stdio.h>

int main(void)
{
    int t, a, b, c;
    scanf("%i", &t);

    for ( int i = 0; i < t; i++)
    {
        scanf("%i %i %i", &a,&b, &c);
        
        if ((float)((a + b) / 2.0) > c)
        {
            printf("Yes\n");
        }
    else
        {
            printf("No\n");
        }
    }
}
