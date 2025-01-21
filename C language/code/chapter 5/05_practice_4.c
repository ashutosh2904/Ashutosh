// Q) write a program using recursion to calculate nth element of fibonacci series ?
#include <stdio.h>
int fibonacci(int a);

int main()
{
    int x;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("The %d %delement of febonacci series is : %d",x , fibonacci(x));
    return 0;
}
int fibonacci(int a)
{
    int x;
    if(a == 0){
        return 0;
    }
    else if(a == 1){
        return 1;
    }
    else
    {
        x = fibonacci(a - 1) + fibonacci(a - 2);
        return x;
    }
}