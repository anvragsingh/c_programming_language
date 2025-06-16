#include <stdio.h>
#include <string.h>

int main()
{

    FILE *ptr;
    ptr = fopen("annu.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d\n", num);

    fclose(ptr);

    return 0;
}