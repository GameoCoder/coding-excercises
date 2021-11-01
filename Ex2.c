#include <stdio.h>
#include <cs50.h>
//To print numbers till ending number in reverse order
int main(void)
{
    int n;
    int i = 0;
    n = get_int("Numbers till where you want to get Numbers: ");
    while(i < n)
    {
        n = n - 1;
        printf("%i\n", n);
    }
    return 0;
}