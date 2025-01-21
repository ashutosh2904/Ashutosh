# include<stdio.h>

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    while(a<10){
        /*a = 11 ;
        while(a>10)----> this will lead to a infinite loop*/
        printf("%d\n" , a);
        a++;
    }
    
    return 0;
}