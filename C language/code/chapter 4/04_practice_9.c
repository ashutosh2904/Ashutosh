// Q) write a program to caluulate th factiorial of the given number using a while loop ?
# include<stdio.h>

int main()
{
    int i = 1, n, factorial =1;

    printf("Enter the number n : ");
    scanf("%d", &n);

    while(i <=n ){
        factorial *=i;
        i++;
        printf("The value of factorial %d is %d\n", n , factorial);
    }
    return 0;
}