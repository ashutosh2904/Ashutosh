//  Q) write a program to cheak whether a given number is prime or not , using loops ?
#include <stdio.h>

int main()
{
    // Not the best way to slove this problem !
    int n;
    int i;
    int prime = 1;

    printf("Enter the number n : ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("This is not a prime number\n");
    }
    else
    {
        printf("This is a prime number\n");
    }
    return 0;
}