//  Q) Write a program to sum first n natural number using while loop ?
#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    int sum;
    printf("Enter the number n : ");
    scanf("%d", &n);
    for (i ; i <= n; i++)
    {
        sum += i;
        printf("the value to sum of first n natural numbers id %d\n", sum);
    }
    return 0;
}