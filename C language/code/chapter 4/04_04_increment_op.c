#include <stdio.h>

int main()
{
    int i = 5;

    printf("The value of i after ++i is %d\n", ++i);
    // ++i ;--> pehle increment fir print
    // i++;--> pehle print fir increment
    printf("The value of i after i is %d\n", i);

    i += 10; //--> increment i by 10
    printf("The value of i after i is %d\n", i);
    return 0;
}