# include<stdio.h>

int main()
{
    float celsius , farenheit ;
    printf("Enter the value of celsius : ");
    scanf("%d", &celsius);
    farenheit = (celsius * 9 / 5)+ 32 ;

    printf("The value of celsius temp in farenheit is %f", farenheit);

    return 0;
}