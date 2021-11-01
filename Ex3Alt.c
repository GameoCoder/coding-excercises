#include <stdio.h>
#include <cs50.h>
//TODO- Write a C program to print all the even numbers between 1 to 100
int main(void)
{
    int a = 2;
    while(a < 100)
    {
        printf("%i ", a);
        a = a + 2;
    }
    printf("\n");
}