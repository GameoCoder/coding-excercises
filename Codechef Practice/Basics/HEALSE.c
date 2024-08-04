/*
  Author - AkaAbhinav
  Problem - https://www.codechef.com/problems/HEALSE
  Date - Aug 4 2024
*/
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        scanf("%i", &h);
    }
    while (h < 1 || h > 24);

    if (h == 8)
    {
        printf("PERFECT\n");
    }
    else if (h < 8)
    {
        printf("LESS\n");
    }
    else
    {
        printf("MORE\n");
    }
}
