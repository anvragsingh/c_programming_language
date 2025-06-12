#include<stdio.h>

int main(){

    int age = 30;

    if(age>60){
        printf("u can drive and u r senior citizen");
    }

    else if(age>45){
        printf("u can drive and u r elder");
    }

    else if(age>25){
        printf("u can drink and drive");
    }
    
    else{
        printf("you can not drive ");
    }
    return 0;
}