#include<stdio.h>


int ret_5(int* ptr){
    printf("the value of ptr is %d\n", ptr);
       printf("the value at  ptr is %d\n", *ptr);
 return 5;
 }
int main(){
    
int i= 1;
int* ptr =&i;
printf("the add of i is %u", &i);
   ret_5(ptr);
    
    return 0;
}