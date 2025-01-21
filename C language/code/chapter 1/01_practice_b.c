#include <stdio.h>

int main()
{
    int length , breadth;

    printf("Enter the value of length of the rectangle\n");
    scanf("%d", &length);
    
    printf("Enter the value of breadth of the rectangle\n");
    scanf("%d", &breadth);

    printf("The area of the rectangle %d", length*breadth );
    return 0;

}