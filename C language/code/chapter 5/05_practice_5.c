// Q) what will the following line produce in a c program ?
#include <stdio.h>

int main()
{
    int i ;
    printf(" Enter the value of i : ");
    scanf("%d", &i);
    printf("%d %d %d", i, ++i, i++);
    return 0;
}