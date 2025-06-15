#include<stdio.h>
#include<string.h>


int main(){
    
    char c = 't';
    int contains = 0;
char st[] = "ij!nztfmg!bovsbh!tjohi";
for (int i = 0; i<strlen(st); i++)

{
    if(st[i] == c){
        contains = 1;
        break;
    }
}

if(contains){
    printf("yessss\n");

}
    
    else{
        printf("nooo");
    }
    
    
    return 0;
}