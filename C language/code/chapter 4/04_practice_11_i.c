//  Q) write a program to cheak whether a given number is prime or not , using different loops ?
#include <stdio.h>

int main()
{
    // Not the best way to slove this problem !
    int n;
    int i = 2;
    int prime = 1;

    printf("Enter the number n : ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
            i++;
    }
    if (prime == 0)
    {
        printf("%d is not a prime number\n",n);
    }
    else
    {
        printf("%d is a prime number\n",n);
    }
    return 0;
}