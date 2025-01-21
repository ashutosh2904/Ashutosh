# include<stdio.h>
// DO WHILE LOOP
// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("The value of i is %d\n", i);
//         i++;
//         if(i==9){
//             break;
//         }
//     } while (i<10);
    
//     return 0;
// }

// FOR LOOP 

int main(){
    int i ,n ;

    printf("Enter the value of n :");
    scanf("%d", &n);

    for(i = 0;i<=n;i++){
        if(i==n-1){
            break;
        }
        printf("The value of i is : %d\n", i);
    }
    return 0;
}