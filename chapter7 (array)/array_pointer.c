#include<stdio.h>

int main(){
    
int marks[] = {56,76,89,67};

int* ptr = &marks[0];
// int* ptr = marks;

for(int i=0;i<4;i++){
    printf("the marks at %d is %d\n", i, *ptr);
    ptr++;
}

    return 0;
}