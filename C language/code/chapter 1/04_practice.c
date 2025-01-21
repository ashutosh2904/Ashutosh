# include<stdio.h>

int main()
{
    int principal , rate , years;
    printf("Enter the value of principal : ");
    scanf("%d", &principal);
    printf("Enter the value of rate : ");
    scanf("%d", &rate);
    printf("Enter the value of years : ");
    scanf("%d", &years);
    int simpelintrest = (principal * rate * years)/100;

    printf("The value of the simpel intrest is %d", simpelintrest);
    return 0;
}