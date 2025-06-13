#include<stdio.h>


void swap(int* a, int* b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;

}

int main(){
    
int a=3;
int b=6;
swap(&a,&b);
printf("the value of a is %d and value of b is %d", a,b);

    
    return 0;
}