// Q) Write a programm to find whether a  year entered by the user is leap year or not ? 
# include<stdio.h>

int main()
{
    int year;
    
    printf("Enter the year\n");
    scanf("%d", &year);

    if (year%4==0)
    {
        printf("The year %d is a leap year", year);
    }
    else{
        printf("The entered year %d is not an leap year", year);
    }
    
    return 0;
}