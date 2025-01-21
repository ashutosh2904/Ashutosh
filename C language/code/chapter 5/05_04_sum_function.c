#include <stdio.h>
//  sum is a funtion which takes a and b as input and returns an integer as an output.
int sum(int a, int b); // function prototype decelaration.
int main()
{
    int c , x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);
    c = sum(x, y); // function call , (2,3) are agrument.
    printf("The value of c is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b; // (a,b) are parameters
    return c;
}