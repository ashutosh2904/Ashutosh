// Q Write a program to find the grades of a student given his marks ?
# include<stdio.h>

int main()
{
    int marks;

    printf("Enter your marks between 0 to 100\n");

    printf("Enter your marks\n");
    scanf("%d", &marks);
    if (marks>100)
    {
        printf("Enter your marks in given the limit\n");
    }
    else
    {
    switch (marks/10){
        case 10 :
        case 9 :
        printf("Your grade is A\n");
        break;
        case 8 :
        printf("Your grade is B\n");
        break;
        case 7 :
        printf("Your grade is C\n");
        break;
        case 6 :
        printf("Your grade is D\n");
        break;
        case 5 :
        printf("Your grade is E\n");
        break;
        default :
        printf("Your grade is F or Fail\n");
        break;

    }
    }
    getch();
    return 0;
}