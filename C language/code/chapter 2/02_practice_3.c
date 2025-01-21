# include<stdio.h>

int main()
{
    // Q) write a program to check whether a number is divisible by 97 or not ?
    
    int x = 97 , num , y;
    printf("Enter the number : ");
    scanf("%d", &num);
    // printf(" divisibility test returns : %d\n",num%97);
    y = num%97;
    if (y == 0){
        printf("Divisible by 97");
    }
    else {
        printf("Not divisible by zero");
    }
    return 0;
}