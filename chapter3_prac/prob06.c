#include<stdio.h>

int main(){
    
int a=21;
int b=34;
int c=726;
int d=89;
 
if(a>b && a>c && a>d){
    printf("the greatest of all is %d", a);
}
else if(b>a && b>c && b>d){
    printf("the greatest of all is %d", b);
}
else if(c>a && c>b && c>d){
    printf("the greatest of all is %d", c);
}
else if(d>a && d>b && d>c){
     printf("the greatest of all is %d", d);
}

    return 0;
}