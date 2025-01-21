// Q) write  aprogram to determine whether a character entered by the user is lower case or not ?
# include<stdio.h>

int main()
{
    // 97-122 = a-z (ASCII values)
    char ch;

    printf("Enter the character\n");
    scanf("%c", &ch );
    if(ch<=122 && ch>=97){
        printf("It is lowercase\n");
    }
    else{
        printf("It is not lowercase\n");
    }


    return 0;
}