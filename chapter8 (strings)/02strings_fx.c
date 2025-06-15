#include<stdio.h>
#include<string.h>


int main(){
    
char st[] = "Anurag";
char s1[86] = "anurag ";
char s2[] = "bkl";

printf("%d\n", strlen(st));

char target[30];
strcpy(target, st);

  printf("%s %s\n", st, target);


  strcat(s1, s2);
  printf("%s\n", s1);  


int a = strcmp("far", "annu");
printf("%d", a);




    return 0;
}