// program to check the age limit to drive ?
# include<stdio.h>

int main()
{
    int age ;
    printf("Enter the number :\n");
    scanf("%d", &age);

    if(age>=90){
        printf("Your age is above 90 , you can't drive");
    }
    else{
        printf("you can drive");
    }

    return 0;
}