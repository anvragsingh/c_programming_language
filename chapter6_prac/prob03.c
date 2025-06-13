#include<stdio.h>

void change_to_10times(int*);

void change_to_10times(int* a){
    *a=*a * 10;
}


int main(){
    int x=12;
    printf("the value of x is %d\n", x);
    change_to_10times(&x);
    printf("the value of x is %d\n",x);

    
    return 0;
}