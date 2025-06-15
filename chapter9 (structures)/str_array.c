#include<stdio.h>
#include<string.h>


struct emly
{
    int code;
    float salary;
    char name[10];

};

int main(){
    struct emly fb[100];

    fb[0].code =190;
    fb[1].code=43;
    struct emly anurag = {100,7823.32, "anurag"};
    printf("%d %f %s", anurag.code, anurag.salary, anurag.name);
return 0;

}