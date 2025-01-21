# include<stdio.h>

int main()
{
    int i = 34 ;
    int *j = &i; // j will show address of i ?
    printf("The value of i is : %d\n", i);
    printf("The value of i is : %d\n", *j);
    printf("The adderess of i is : %u\n", &i);
    printf("The adderess of i is : %u\n", j);
    printf("The adderess of i is : %u\n", &j);
    printf("The value of i is : %u\n", *(&j));
    return 0;
}