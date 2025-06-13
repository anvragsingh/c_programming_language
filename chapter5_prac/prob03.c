#include <stdio.h>

float force(float);

float force(float mass)
{
    return mass * 9.8;
}

int main()
{

    int m = 45;
    printf("the force exerted by mass m is %f", force(m));
    return 0;
}