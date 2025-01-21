# include<stdio.h>
void display(); // Function prototype
int main()
{
    int a;
    printf("Intitalizing display function\n");
    display(); // Function call
    printf("Display function finishes its work\n");

    return 0;
}
// Function defination
void display(){
    printf("This is display\n");
}