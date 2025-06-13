#include<stdio.h>

int main(){
    
int i = 43;
int* j= &i;
printf("the address of i is %p\n", &i);
   printf("the address of i is %p\n", j); 
    return 0;
}