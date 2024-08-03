/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/ADVITIYA1
  Date - Aug 3 2024
*/
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        scanf("%i", &n);
    }
    while (n < 1 || n > 18);
    if (n == 16 || n == 17 || n == 18)
        {
            printf("ADVITIYA\n");
        }
        else
        {
            printf("WAITING FOR ADVITIYA\n");
        }
}
