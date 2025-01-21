#include <stdio.h>
void goodnight();
void goodmorning();
void goodafternoon();

int main()
{
    goodmorning();
    return 0;
}
void goodmorning()
{
    printf("Good morning Master\n");
    goodafternoon();
}
void goodafternoon()
{
    printf("Good afternoon Master\n");
    goodnight();
}
void goodnight()
{
    printf("Good night Master\n");
}