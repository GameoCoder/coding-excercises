/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/START161D/problems/DONUTSELL
  Date - Nov 20 2024
*/
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%i", &t);
    while (t--) 
    {
        int n, m;
        scanf("%i %i", &n, &m);

        int a[n], b[m];
        int i;
        for (i = 0; i < n; i++) 
        {
            scanf("%i", &a[i]);
        }
        for (i = 0; i < m; i++)
        {
            scanf("%i", &b[i]);
        }
        int count = 0;
        for (i = 0; i < m; i++)
        {
            if(a[b[i] - 1] > 0)
            {
                a[b[i] - 1]--;
            }
            else
            {
                count++;
            }
        }
        printf("%i\n", count);
    }
}

