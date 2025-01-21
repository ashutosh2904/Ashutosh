# include<stdio.h>

int main()
{
    int x = 5;
    int y = 2;

    printf("The value of 3*x - 5*y is %d\n", 3*x - 5*y );
    printf("The value of 3*x / 5*y is %d\n", 3*x / 5*y );
    // 3*x / 5*y = 24/6-----> will be wrong answer
    // As per the operator associativity
    // (15/5)*2
    // 3*2 = 6
    return 0;
}