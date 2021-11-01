#include <stdio.h>
#include <cs50.h>
//TODO- Write a C program to print all the odd numbers between 1 to 100
int main(void)
{
    int a = 1;
    for (int i = 0; a < 100; i++)
    {
        printf("%i ", a);
        a = a + 2;
    }
    printf(" ");
}