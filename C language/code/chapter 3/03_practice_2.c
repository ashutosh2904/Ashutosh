/* Q) write a program to find out whether a studentis pass or fail , if it requires total 40% and 33% in each subject to pass.
Assume 3 subject and take marks as an input from user ? */

# include<stdio.h>

int main()
{
    int physics , chemistry , maths ;
    float total;

     printf("Enter physics marks\n");
     scanf("%d", &physics);
     printf("Enter chemistry marks\n");
     scanf("%d", &chemistry);
     printf("Enter maths marks\n");
     scanf("%d", &maths);

    total = (physics + chemistry + maths)/3;
    if((total<40) || physics<33 || chemistry<33 || maths<33 ){
        printf("The percentage obtained %f is less than 40 , you are fail\n", total);
    }
    else
    {
        printf("The percentage obtained %f is more than 40 , you are pass\n", total);
    }
    return 0;
}