#include<stdio.h>

int main(){
    FILE *fptr;
    int num = 5;
    fptr = fopen("annu.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr," %d", num*(i+1));
        fprintf(fptr," %c", '\n');
    }
    
}