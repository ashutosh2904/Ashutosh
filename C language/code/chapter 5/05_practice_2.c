// Q) write a function to convert celsius temperature into farenheit ?
#include <stdio.h>
int farenheit(int i);
int main()
{
    int celsius;
    printf("The conversion of celsius into farenheit is %d",farenheit(celsius));
    return 0;
}
int farenheit(int i)
{
    int x;
    int celsius;
    printf("Enter the value of celsius : ");
    scanf("%d", &celsius);
    x = (celsius * 9 / 5) + 32;
    return x;
}