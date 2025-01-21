# include<stdio.h>
void change(int b);
int main()
{
    int b ;
    b = 23;
    printf("The value of b before function is %d\n", b);
    change(b);
    printf("The value of b after function is %d\n", b);
    // The values will not change ater calling change because both b are different from each other.
    return 0;
}
void change(int b){
    b = 77;
}
