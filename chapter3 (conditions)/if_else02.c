#include<stdio.h>

int main() {
     
     char grade;
     int marks;
     printf("enter marks: ");
     scanf("%d", &marks);
     
     if(marks<=100 && marks>=90){
        printf("grade = 'a'");    
         }

      else if(marks<=90 && marks>=80){
        printf("grade = 'b'");  }  
         

      else if(marks<=80 && marks>=70){
        printf("grade = 'c'") ;  }
         

      else if(marks<=70 && marks>=60){
       printf(" grade = 'd'");}
     

      else if(marks<=60 && marks>=50){
       printf(" grade = 'e'");}
     

      else if(marks<=50){
       printf(" grade = 'f'"); }
        

     

    return 0;
}