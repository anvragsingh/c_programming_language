#include<stdio.h>
#include<string.h>

int main(){
    
char st[] = "ij!nztfmg!bovsbh!tjohi";
for (int i = 0; i<strlen(st); i++)

{
    st[i] = st[i] - 1;
}
    
    printf("%s", st);
    
    return 0;
}