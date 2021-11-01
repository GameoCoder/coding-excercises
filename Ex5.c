#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num = get_int("Target Number: ");
    float lol = (float) num;
    float tot = (lol * (lol + 1)) / 2;
    printf("Sum of Numbers Between 1 - %i = %.2f \n", num, tot);
}