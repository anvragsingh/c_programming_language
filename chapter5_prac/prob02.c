#include<stdio.h>


float c2f(float);

float c2f(float c){
    return ( (9*c)/5 )+ 32;
}




int main(){
    
float c =45;
printf("the temp to f for %f is %f",c,  c2f(c));
    
    return 0;
}