#include<stdio.h>

int change_to_10times(int);

int change_to_10times(int a){
    // int change_to_10times = a*10;
     return (a*10);
     

}


int main(){
    int x=12;
    printf("the value of x is %d\n", x);


    change_to_10times(x);
    printf("the value of x is %d\n", change_to_10times(x));
    

    
    return 0;
}