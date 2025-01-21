#include<stdio.h>

int main()
{
    int i = 1 , sum ,n;

    printf("Enter the n : ");
    scanf("%d", &n);

    do{
        sum += i;
        i++;
        printf("The sum of n numbers : %d\n", sum);
    }
    while (i<=n);
    
    return 0;
}