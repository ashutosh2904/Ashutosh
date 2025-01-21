# include<stdio.h>

int main()
{
    int age ;
    int vippass;
    //int vippass = 1;

    printf("Enter the number :\n");
    scanf("%d", &age);
    printf("Enter the vippass (1 or 0) :\n");
    scanf("%d", &vippass);


    if((age<=90 && age>=18) || vippass == 1)//((age<=90 && age>=18) || !vippass == 1)---> not operator will reverse the result 
    {
        printf("Your age is below 90 , you can drive\n");
    }
    else{
        printf("you can't drive\n");
    }

    return 0;
}