#include<stdio.h>
#include<string.h>


int main(){
    
    char c = 't';
    int count = 0;
char st[] = "ij!nztfmg!bovsbh!tjohi";
for (int i = 0; i<strlen(st); i++)

{
    if(st[i] == c){
        count++;
    }
}
    
    printf("%d", count);
    
    return 0;
}