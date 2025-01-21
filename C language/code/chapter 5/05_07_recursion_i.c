#include <stdio.h>
int factorial(int i);

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}
int factorial(int i)
{
    int x ;
    printf("calling factorial %d\n", i);
    if (i == 0 || i == 1)
        return 1;
    else
    {
        x = i * factorial(i - 1);
        return x;
    }
}