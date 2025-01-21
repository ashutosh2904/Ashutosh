// Q) write a recurrsion function to calculate the sum of first n natural number ?
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("\nThe sum of first %d natural number is %d", n, sum(n));
    return 0;
}
int sum(int n)
{
    printf("%d, ",n);
    if (n != 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return n;
    }
}