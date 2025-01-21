// Q) use the library funcion to calculate the area of a square with side a.
# include<stdio.h>
# include<math.h>
int main()
{
    int side;
    printf("Enter the value of side : ");
    scanf("%d", &side);
    printf("the area of square is %f", pow(side,2));
    return 0;
}
