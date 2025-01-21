#include <stdio.h>
void goodnight(); // They are user defined functions. 
void goodmorning();
void goodafternoon();

int main()
{
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}
void goodmorning()
{
    printf("Good morning Master\n");
}
void goodafternoon()
{
    printf("Good afternoon Master\n");
}
void goodnight()
{
    printf("Good night Master\n");
}