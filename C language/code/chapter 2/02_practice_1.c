#include <stdio.h>

int main()
{
    // Q) which of tge following is invailed ?
    
    //(i)
    //int a ; b = a;
    //invailed beacuse b is not defined

    //(ii)
    int v = 3 ^ 3;
    printf("%d", v);
    // vailed but it will not give 9 , it wil give 0

    //(iii)
    char dt = '21 dec 2020';
    //it's invailed because the char is too long

    return 0;
}
