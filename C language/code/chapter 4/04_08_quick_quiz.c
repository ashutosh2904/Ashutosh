//  Q) Write a program to print first n numbers using for loop ?
# include<stdio.h>

int main()
{
    int i ;
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for(i = 0 ; i<n ; i++){
        printf("%d\n", i+1);
    }
    return 0;
}