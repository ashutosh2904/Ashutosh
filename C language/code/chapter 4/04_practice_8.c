// Q) write a program to calculate the factiorial of the given number using a for loop ?
# include<stdio.h>

int main()
{
    int i , n, factorial =1;

    printf("Enter the number n : ");
    scanf("%d", &n);

    for(i = 1; i <=n ; i++){
        factorial *=i;
    }
    printf("The value of factorial %d is %d", n , factorial);
    return 0;
}