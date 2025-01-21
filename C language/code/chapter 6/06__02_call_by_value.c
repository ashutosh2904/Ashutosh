#include <stdio.h>
int sum(int a, int b);
int main()
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    printf("The value of x + y is : %d\n", sum(x, y));
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 34445;
    b = 31233;
    return c;
}