

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    
srand(time(0));

int randomNumber = (rand() % 100) +1;
int no_of_guesses = 0;
int guessed;
 
// printf("Random Number: %d\n", randomNumber);

   do {
    printf("guess the number : ");
    scanf("%d", &guessed);
    if(guessed>randomNumber){
        printf("lower no plss \n");
    }
    else {
        printf("higher no plss \n");
    }
    no_of_guesses++;

   } while (guessed !=randomNumber);

   printf("you guessed the no in %d guesses", no_of_guesses);


    return 0;
}