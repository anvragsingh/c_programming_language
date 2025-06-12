// #include<stdio.h>

// int main(){
    
// int product = 1;
// int n = 5;
// for (int i = 1; i <=n; i++)
// {
//    product *=i; 
// }

// printf("the fac is %d", product);
    
//     return 0;
// }




#include<stdio.h>

int main(){
    int i = 1;
int product = 1;
int n = 5;
while(i<=n)
{
   product *=i;
   i++; 
}

printf("the fac is %d", product);
    
    return 0;
}