#include <stdio.h>

int main()
{

    int i = 4;
    int *j = &i;
    int **k = &j;
    printf("the value of i is %d\n", *j);
    printf("the value of i is %d\n", *(&i));
    return 0;
}