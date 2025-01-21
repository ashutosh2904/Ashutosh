// Q) write a program to find average of three numbers using function ?
#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    int a , b , c;
    printf("Enter the value of a & b & c: ");
    scanf("%d %d %d", &a ,&b, &c);
    
    printf("The value of c is %f\n", average(a, b, c));

    return 0;
}
float average(int a, int b, int c)
{
    float x;
    x = (a + b + c) / 3;
    return x;
}