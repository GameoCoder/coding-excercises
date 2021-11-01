#include <stdio.h>
#include <cs50.h>
//Program to print numbers in ascending order till target value
int main(void)
{
    int n;
    int x = 1;
    n = get_int("Numbers till where you want to get Numbers: ");
    for(int i = 0; i < n; i++)
    {
        printf("%i \n", x);
        x = x + 1;
    }
}