#include<stdio.h>
#include<string.h>


 typedef struct emly
{
    int code;
    float salary;
    char name[10];

} emp;

int main(){
    emp e1;
    emp* ptr1 = &e1;
    e1.code =23;
    strcpy(e1.name, "annu");
    e1.salary = 43.34;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s", ptr1->code, ptr1->salary, ptr1->name);
}
