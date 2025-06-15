#include<stdio.h>
#include<string.h>


struct emly
{
    int code;
    float salary;
    char name[10];

};


int main(){
    
struct emly e1, e2;
e1.code = 12133;
strcpy(e1.name, "anurag ");
e1.salary = 24.34;

printf("%d %f %s", e1.code, e1.salary, e1.name);
    
    return 0;
}