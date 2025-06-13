#include <stdio.h>

int main()
{

    int i = 2;
    int* ptr1 = &i;
    int** ptr2 = &ptr2;
    printf("the add of i is %u\n", &i);
    printf("the add of i is %d\n", *ptr1);
    printf("the add of i is %u\n", **ptr2);
    return 0;
}