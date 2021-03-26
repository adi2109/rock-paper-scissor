/*
ROCK PAPER SCISSOR
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockpaperscissor(char input, char computer){
    /* returns 1 if you win, -1 if you lose and 0 if draw

     Condition for draw

    
     Cases covered:
     rr
     pp
     ss
     */
    if(input == computer){
        return 0;
    }

    /* Non-draw conditions
     Cases covered:
     rp
     pr
     sp 
     ps
     sr
     rs
     */
    

    if(input =='r' && computer=='p'){
        return -1;
    }
    else if(input =='p' && computer =='r'){
        return 1;
    }

    if(input =='s' && computer =='p'){
        return 1;
    }
    else if(input =='p' && computer =='s'){
        return -1;
    }

    if(input =='s' && computer =='r'){
        return -1;
    }
    else if(input =='r' && computer =='s'){
        return 1;
    }

}
int main(){
    char input, computer;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        computer = 'r';
    }
    else if(number>33 && number<66){
        computer ='s';
    }
    else{
        computer ='p';
    }
    
    printf("Enter 'r' for ROCK, 'p' for PAPER and 's' for SCISSOR\n\n");
    printf("YOUR CHOICE:");
    scanf("%c", &input);
    int result = rockpaperscissor(input, computer);
    if(result ==0){
        printf("Game draw!\n\n");
    }
    else if(result==1){
        printf("You win!\n\n");
    }
    else{
        printf("You Lose!\n\n");
    }
    printf("You chose %c and computer chose %c.\n", input, computer);
    return 0;
}