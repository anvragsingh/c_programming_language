

#include<stdio.h>


    
int sum(int, int);

int sum(int x, int y){
     
    return x+y;

}

int main(){
    int a=1;
    int b = 34;
    int c = sum(a,b);
    printf("sum is %d", c);
    
    return 0;
}