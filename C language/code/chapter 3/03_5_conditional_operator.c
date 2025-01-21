# include<stdio.h>

int main()
{
    int A ;

    printf("Enter the number :\n");
    scanf("%d", &A);
    
    //One liner statement 
    
    (A<5)? printf("A is less than 5") : printf("A is greater than 5");
    return 0;
}