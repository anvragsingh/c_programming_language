#include<stdio.h>
#include<string.h>


struct emly
{
    int code;
    float salary;
    char name[10];

};

int main(){
    struct emly e1;
    e1.code = 123;
    struct emly *ptr;
    ptr = &e1;
    printf("%d", (*ptr).code);
printf("%d", ptr-> code);
return 0;
}
