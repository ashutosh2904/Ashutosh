// program to check the age limit to drive ? by if else.
# include<stdio.h>

int main()
{
    int age ;
    printf("Enter the number : ");
    scanf("%d", &age);

    if(age>=90){
        printf("Your age is above 90 , you can't drive");
    }
    else if(age<=18){
        printf("Your age is below 18 , you can't drive");
    }
    else{
        printf("you can drive");
    }

    return 0;
}