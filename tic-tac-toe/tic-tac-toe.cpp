// tic-tac-toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string Player1, Player2;
char space[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
char player_symbol1 = 'x';
char player_symbol2 = 'o';
bool isRunning = true;

void drawBoard(char *space);
void player1Move(char *space, char player_symbol1);
void player2Move(char *space, char player_symbol2);
bool checkWin(char *space, char player_symbol1, char player_symbol2);



int main()
{


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
    cout << "\n";
    cout << "\n";

    drawBoard(space);

    while (isRunning) {
        player1Move(space, player_symbol1);
        if (checkWin(space, player_symbol1, player_symbol2)) {
            isRunning = false;
            break;
        }
        player2Move(space, player_symbol2);
        if (checkWin(space, player_symbol1, player_symbol2)) {
            isRunning = false;
            break;
        }
    }




    return 0;
}


void drawBoard(char* space) {
    cout << "       Board:     " << endl;
    cout << "\n";
    cout << "\n";
    cout << "      |     |     " << endl;
    cout << "   " << space[0] << "  |  " << space[1] << "  |  " << space[2] << endl;
    cout << "      |     |     " << endl;
    cout << "-------------------" << endl;
    cout << "      |     |     " << endl;
    cout << "   " << space[3] << "  |  " << space[4] << "  |  " << space[5] << endl;
    cout << "      |     |     " << endl;
    cout << "-------------------" << endl;
    cout << "      |     |     " << endl;
    cout << "   " << space[6] << "  |  " << space[7] << "  |  " << space[8] << endl;
    cout << "      |     |     " << endl;
    cout << "\n";
    cout << "\n";


}
void player1Move(char* space, char player_symbol1) {
    int p1_move;
    do {

        cout << "[ " << Player1 << " ], Please pick a Position (1 - 9): ";
        cin >> p1_move;
        p1_move--;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "enter a number please.. (1-9) \n";
            continue;
        }
        else if (space[p1_move] != ' ') {
            cout << "space occupuied" << endl;
            continue;
        }
        else if (space[p1_move] == ' ') {
            space[p1_move] = player_symbol1;
            system("cls");
            drawBoard(space);
            break;
        }

    } while (p1_move < 0 || p1_move > 8 || space[p1_move] != ' ');
}
void player2Move(char* space, char player_symbol2) {
    int p2_move;
    do {

        cout << "[ " << Player2 << " ], Please pick a Position (1 - 9): ";
        cin >> p2_move;
        p2_move--;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "enter a number please.. (1-9) \n";
            continue;
        }
        else if (space[p2_move] != ' ') {
            cout << "space occupuied" << endl;
            continue;
        }
        else if (space[p2_move] == ' ') {
            space[p2_move] = player_symbol2;
            system("cls");
            drawBoard(space);
            break;
        }

    } while (p2_move < 0 || p2_move > 8 || space[p2_move] != ' ');
}
bool checkWin(char* space, char player_symbol1, char player_symbol2) {
    if (space[0] != ' ' && space[0] == space[1] && space[1] == space[2]) {
        space[0] == player_symbol1 ? cout << "[ " << Player1 << " ], WINS! \n"  : cout << "[ " << Player2 << " ], WINS! \n";
    }
    else if (space[3] != ' ' && space[3] == space[4] && space[4] == space[5]) {
        space[3] == player_symbol1 ? cout << "[ " << Player1 << " ], WINS! \n" : cout << "[ " << Player2 << " ], WINS! \n";
    }
    else if (space[6] != ' ' && space[6] == space[7] && space[7] == space[8]) {
        space[6] == player_symbol1 ? cout << "[ " << Player1 << " ], WINS! \n" : cout << "[ " << Player2 << " ], WINS! \n";
    }
    else if (space[0] != ' ' && space[0] == space[3] && space[3] == space[6]) {
        space[0] == player_symbol1 ? cout << "[ " << Player1 << " ], WINS! \n" : cout << "[ " << Player2 << " ], WINS! \n";
    }
    else if (space[1] != ' ' && space[1] == space[4] && space[4] == space[7]) {
        space[1] == player_symbol1 ? cout << "[ " << Player1 << " ], WINS! \n" : cout << "[ " << Player2 << " ], WINS! \n";
    }
    else if (space[2] != ' ' && space[2] == space[5] && space[5] == space[8]) {
        space[2] == player_symbol1 ? cout << "[ " << Player1 << " ], WINS! \n" : cout << "[ " << Player2 << " ], WINS! \n";
    }
    else if (space[0] != ' ' && space[0] == space[4] && space[4] == space[8]) {
        space[0] == player_symbol1 ? cout << "[ " << Player1 << " ], WINS! \n" : cout << "[ " << Player2 << " ], WINS! \n";
    }
    else if (space[2] != ' ' && space[2] == space[4] && space[4] == space[6]) {
        space[2] == player_symbol1 ? cout << "[ " << Player1 << " ], WINS! \n" : cout << "[ " << Player2 << " ], WINS! \n";
    }
    else if (space[0] != ' ' && space[1] != ' ' && space[2] != ' ' && space[3] != ' ' && space[4] != ' ' && space[5] != ' ' && space[6] != ' ' && space[7] != ' ' && space[8] != ' ') {
        cout << "[ DRAW! ]";
    }
    else {
        return false;
    }

    return true;
}