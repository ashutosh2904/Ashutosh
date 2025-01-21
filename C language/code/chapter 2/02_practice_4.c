#include <stdio.h>

int main()
{
    // Q) Explain step byt step evaluation of 3*x/y-z+k where x = 2 , y = 3 , z = 3 , k = 1 ?

    int x = 2, y = 3, z = 3, k = 1;
    float problem = 3 * x / y - z + k;

    printf("The result of the problem 3 * x / y - z + k is : %f", problem);
    // 3 * x / y - z + k 
    // 6 / y - z + k
    // 2 - z + k
    //-1 + k
    //-1 + 1 = 0

    return 0;
}