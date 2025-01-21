// Q) write a function to calculate force of attraction on a body of mass m exerted by earth ?
#include <stdio.h>
float force(float m);
float main()
{
    float m ;
    printf("Enter the value of m : ");
    scanf("%f", &m);
    printf("The force of attraction on a body of mass m exerted by earth is %.2f(Newtons)\n",force(m));
    return 0;
}
float force(float m)
{
    float f;
    f = (m * 9.8);
    return f;
}