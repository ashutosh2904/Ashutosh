// Q) write a program to find greatest of the four number entered ?
#include <stdio.h>

int main()
{
    int a , b , c , d ;

    printf("Enter the number:\n");
    scanf("%d %d %d %d", &a , &b , &c , &d );

    if (a>=b && a>=c && a>=d){
        printf("%d is the largest number\n" , a);
    }
    else if (b>=a && b>=c && b>=d){
        printf("%d is the largest number\n" , b);
    }
    else if (c>=a && c>=b && c>=d){
        printf("%d is the largest number\n" , c);
    }
    else if (d>=a && d>=b && d>=c){
        printf("%d is the largest number\n" , d);
    }

        return 0;
}