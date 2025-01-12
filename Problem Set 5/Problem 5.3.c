// Write a program for a matchstick game being played between the 
// computer and a user. Your program should ensure that the 
// computer always wins. Rules for the game are as follows: 
// 
// There are 21 matchsticks. 
// 
// The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
// 
// After the person picks, the computer does its picking. 
// 
// Whoever is forced to pick up the last matchstick loses the game.
#include<stdio.h>
int main(){
    long int number = 21; 
    printf ("Enter the number \n" ) ; 
    while(number){
        printf ("Please pick up the matchstick (1,2,3 or 4)\n" );
        if(number == 1){
            printf("Number of matchstick left is 1 . You Lose !\n");
            break;
        }
        int player_move;
        scanf("%d",&player_move);
        number -= player_move;
        printf ("Number of matchsticks after person move %ld\n",number);
        int computers_pick = 5-player_move;
        number -= computers_pick;
        printf ("Number of matchsticks after computer's move %ld\n",number);
    }
    printf("%ld\n",number);
}