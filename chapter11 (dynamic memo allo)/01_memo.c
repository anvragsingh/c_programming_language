#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));

    ptr[0] = 2;
    ptr[1] = 4;

    printf("%d", ptr[1]);

    return 0;

}


malloc()
calloc()
free()
realloc()