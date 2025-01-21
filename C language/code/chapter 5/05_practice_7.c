// Q) write a program  using function to print the folloing pattern ?
#include <stdio.h>
void printpattern(int n);
int main()
{
    int n = 3;
    printpattern(n);
    return 0;
}
void printpattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    int i;
    printpattern(n - 1);
    for (i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}