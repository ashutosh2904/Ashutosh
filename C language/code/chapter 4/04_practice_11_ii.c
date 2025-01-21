#include <stdio.h>

int main()
{
    int i = 2, n, prime = 1;

    printf("Enter the number : ");
    scanf("%d",&n);

    do
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
            i++;
    } while (i < n);
    if (prime == 0)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number ", n);
    }
    return 0;
}