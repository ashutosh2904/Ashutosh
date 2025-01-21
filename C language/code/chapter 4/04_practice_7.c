//  Q) write a program to calculate the sum of numbers occuring in the multiplication table of 8 ?
#include<stdio.h>

int main()
{

    int i , sum;

    
    for(i = 1; i<=10; i++){
        sum += i*8; 
        printf("8 x %d = %d , sum => %d\n", i , i*8 ,sum );
    }

    return 0;
}