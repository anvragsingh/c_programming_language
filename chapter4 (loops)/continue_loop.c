#include <stdio.h>
int main()
{
    int i = 0;
    while (i <25){
        if (i == 10){
            i++;
            continue;
        }
        printf("i is %d \n", i);
        i++;
    }
        
    
    return 0;
}