#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 7;

    printf("The value of a + b is : %d\n", a + b);
    printf("The value of a - b is : %d\n", a - b);
    printf("The value of a * b is : %d\n", a * b);
    printf("The value of a / b is : %d\n", a / b);

    int z;
    z = b * a; //-----> it is legal
    // b * a = z ;-----> it is illegal
    printf("The value of z is : %d\n", z);

    // how to use the Module division operator

    printf("when 5 is devided by 2 then is leaves a remainder : %d\n", 5%2);
    printf("when 5 is devided by 2 then is leaves a remainder : %d\n", -5%2);
    printf("when 5 is devided by 2 then is leaves a remainder : %d\n", 5%-2);

    // no operator is assumed present

    // printf ("The value of 4 * 5 is : %d", 4.5 , (4)(5));-----> this will no return 20
    printf ("The value of 4 * 5 is : %d\n", (4)*(5));  //-----> this will return 20 because the operator is used

    // There is not operator to perform exponentiation in c
    printf ("The value of 4 ^ 5 is : %d\n", 4^5); //----> will not produce 4 to the power 5

    // you can do exponentiation by using pow(x,y) from <math.h>
    printf ("The value of 4 to the power of 5 is : %f\n", pow(4,5));

    // Type of conversions
    printf ("The value of 6 + 7 is : %d\n", 6 + 7);
    printf ("The value of 6 + 7.8 is : %f\n", 6 + 7.8);
    printf ("The value of 6.1 + 7.8 is : %f\n", 6.1 + 7.8);
    return 0;
}