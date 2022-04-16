#include <stdio.h>
#include <stdlib.h>
//box = the each box that will represent a square in the tick tak toe quordanats, need 10 becus 0 disapers
char Box[10] = { '0','1', '2', '3', '4', '5', '6', '7', '8', '9' };
//choice is the variable for the choice of each players, player is a variale i created to change between 1 an 2, it was easier then audimating a player 2
typedef strut _player{
    int choice;
    int player;
} Player;

//creating functions for the winning, the board that contains the numbers represent the board for tictac toe, and code that changes the numbers
int checkForWin();
void Board();
void BoardPlay(char mark);

int main()
{
    int gameStatus;
    char mark;
    Player players[2];
    player = 1;

   
    do {
        Board();
        //change turns
        player = (player % 2) ? players[0] : players[1];

        //this is the only thing tht stops the loop and takes the input 
        printf("Player %d\n\n", player);
        scanf_s("%d", &choice);
        //sets x or o depending on player
        mark = (player == 1) ? 'X' : 'O';
        //changes player 
        player++;
        //adds changes to board after the player makes there choise, puting it in the logic of play game
        BoardPlay(mark);
        //ends the game... other wise there is no point
        gameStatus = checkForWin();


    } while (gameStatus == -1);
    //i dont understand fully why this logic was needed but it would not run without this, i know 
    if (gameStatus == 1) //i know this has somthing to do with changing the player
        printf("Decrement %d\n\n", --player);

    return 0;
}
//check for rows if 1=2&2=3= 1=3... i felt smart for this
int checkForWin()
{
    int returnValue = 0;

    if (Box[1] == Box[2] && Box[2] == Box[3])
        returnValue = 1;

    else if (Box[4] == Box[5] && Box[5] == Box[6])
        returnValue = 1;

    else if (Box[7] == Box[8] && Box[8] == Box[9])
        returnValue = 1;

    else if (Box[1] == Box[4] && Box[4] == Box[7])
        returnValue = 1;

    else if (Box[2] == Box[5] && Box[5] == Box[8])
        returnValue = 1;

    else if (Box[3] == Box[6] && Box[6] == Box[9])
        returnValue = 1;

    else if (Box[1] == Box[5] && Box[5] == Box[9])
        returnValue = 1;

    else if (Box[3] == Box[5] && Box[5] == Box[7])
        returnValue = 1;
    else
        //logic if thers no winner 
        returnValue = -1;

    return returnValue;
}

//reprints board changing the numbers to the letter to players
void Board()
{
    //holds the board, like storage for ant potental changes
    


    printf("  %c | %c | %c \n", Box[1], Box[2], Box[3]);
    printf("___________\n");
    printf("  %c | %c | %c \n", Box[4], Box[5], Box[6]);
    printf ("____________\n");
    printf("  %c | %c | %c \n", Box[7], Box[8], Box[9]);
    
}

//this function changes the numbers 1 to 9 to x or o 
void BoardPlay(char mark)
{
    if (choice == 1 && Box[1] == '1')
        Box[1] = mark;

    else if (choice == 2 && Box[2] == '2')
        Box[2] = mark;

    else if (choice == 3 && Box[3] == '3')
        Box[3] = mark;

    else if (choice == 4 && Box[4] == '4')
        Box[4] = mark;

    else if (choice == 5 && Box[5] == '5')
        Box[5] = mark;

    else if (choice == 6 && Box[6] == '6')
        Box[6] = mark;

    else if (choice == 7 && Box[7] == '7')
        Box[7] = mark;

    else if (choice == 8 && Box[8] == '8')
        Box[8] = mark;

    else if (choice == 9 && Box[9] == '9')
        Box[9] = mark;

}