/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/YOGADAY
  Date - Aug 4 2024
*/
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        scanf("%i", &n);
    }
    while (n < 1 || n > 100);
    printf("%i\n", n/12);
}
