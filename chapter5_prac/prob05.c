#include<stdio.h>

int sum_nat(int);

int sum_nat(int n){
    if(n==1){
        return 1;
    }
    return sum_nat(n-1) + n;
}



int main(){
    printf("the sum of 1st 5 nat no is %d", sum_nat(5));
    return 0;
}