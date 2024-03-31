#include "chessGame.h"
#include <iostream>

using namespace std;

void runGame(){

    string userInput;
    string moveInput;
    string name1;
    string name2;
    char player1Color = '1';
    int playerTurn;
    char board[][8] = {{'r', 'h', 'b', 'k', 'q', 'b', 'h', 'r'},
            {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
            {'R', 'H', 'B', 'K', 'Q', 'B', 'H', 'R'}};
    

    cout << "Welcome to Chess! Press any key to continue:\n";
    cin >> userInput;
    cout << "Press 1 to start a new game, or any other key to quit\n";
    cin >> userInput;
    while(userInput == "1"){
        cout << "\nEnter player 1 name: ";
        cin >> name1;
        cout << "\nEnter player 2 name: ";
        cin >> name2;
        do{
            cout << "\n" << name1 << " (b)lack or (w)hite? ";
            cin >> player1Color;
        }while(player1Color != 'b' && player1Color != 'w');
        printBoard(board, name1, name2, player1Color);
        break;
    }
}

void printBoard(char board[8][8], string player1, string player2, char player1Color){
    string blackName;
    string whiteName;
    if(player1Color == 'b'){
        blackName = player1;
        whiteName = player2;
    }else{
        blackName = player2;
        whiteName = player1;
    }
    for(int i = 0; i < 15 - blackName.length()/2; i++){
        cout << " ";
    }
    cout << blackName << endl;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << "[" << board[i][j] << "] ";
        }
        cout << "\n";
    }
    for(int i = 0; i < 16 - whiteName.length()/2; i++){
        cout << " ";
    }
    cout << whiteName << endl;
    
}