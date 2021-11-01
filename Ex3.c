#include <stdio.h>
#include <cs50.h>
//TODO- Write a C program to print all the even numbers between 1 to 100
int main(void)
{
    int a = 2;
    for (int i = 0; a < 100; i++)
    {
        printf("%i ", a);
        a = a + 2;
    }
    printf("\n");
}