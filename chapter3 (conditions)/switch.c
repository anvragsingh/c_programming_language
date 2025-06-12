#include<stdio.h>

int main(){
    
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    switch(a){
       case 1:
       printf("u entered 1\n");
break;
       case 2:
       printf("u entered 2\n");
break;
       case 3:
       printf("u entered 3\n");
break;
       case 4:
       printf("u entered 4\n");
break;
       default :
       printf("u entered nothing");
    }
    return 0;
}