#include<stdio.h>

int main(){
    
int i =2;
int* ptr = &i;
printf("the add of i is %u", &i);
   printf("the add of i is %u", *ptr) ;
    return 0;
}