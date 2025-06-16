#include<stdio.h>
#include<string.h>


int main(){
    
char ch;
FILE *ptr;
ptr = fopen("annu.txt", "r");

while(1)
{
    ch = fgetc(ptr);
    printf("%c", ch);

    if (ch == EOF)
    {
        break;
    }
}
    
    return 0;
}