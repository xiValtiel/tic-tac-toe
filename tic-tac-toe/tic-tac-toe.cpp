// tic-tac-toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void drawBoard(char *space);
void player1Move(char *space, char player_symbol1);
void player2Move(char *space, char player_symbol2);
void checkWin(char *space, char player_symbol1, char player_symbol2);
void checkDraw(char* space, char player_symbol1, char player_symbol2);



int main()
{
    string Player1, Player2;
    char space[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player_symbol1 = 'x';
    char player_symbol2 = 'o';
    bool isRunning = true;


    cout << "Hello World!\n";
    cout << "Today we will make a game of tic-tac-toe \n";


    cout << "Player1, Please enter your name: ";

    cin >> Player1;

    cout << "Hey! " << Player1 << ", Welcome." << endl;

    cout << "Player2, Please enter your name: ";

    cin >> Player2;

    cout << "Hey! " << Player2 << ", Welcome." << endl;

    cout << " " << endl;

    cout << "[ Player 1: " << Player1 << " ]     [ " << "Player 2: " << Player2 << " ]\n";




    return 0;
}


void drawBoard(char* space) {

}
void player1Move(char* space, char player_symbol1) {

}
void player2Move(char* space, char player_symbol2) {

}
void checkWin(char* space, char player_symbol1, char player_symbol2) {

}
void checkDraw(char* space, char player_symbol1, char player_symbol2) {

}