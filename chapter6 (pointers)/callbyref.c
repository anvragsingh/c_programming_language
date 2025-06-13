#include<stdio.h>

int sum(int*, int*);

int sum(int* a, int* b){
    *a=12;
    return (*a+*b);
}



int main(){
   int x=1;
   int y=6; 
printf("sum is %d", sum(&x,&y));
    
    return 0;
}