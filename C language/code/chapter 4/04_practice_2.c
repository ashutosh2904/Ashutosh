//  Q) Write a multiplication table of 10 in reverse order ?
# include<stdio.h>

int main()
{
   
    int i ;
    
    printf("**Multiiplication table of : 10**\n\n");
    
    for(i = 10 ; i; i--){
        printf("10 x %d = %d\n" ,i ,10*i);
    }
    return 0;
}