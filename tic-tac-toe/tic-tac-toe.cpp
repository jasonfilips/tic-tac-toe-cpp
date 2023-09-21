// tic-tac-toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;

char digits[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
char token = 'x';
bool tie = false;
string player1;
string player2;


void DrawTable(char digits[3][3]) {
    cout << "\n";
    cout << "  " << digits[0][0] << " | " << digits[0][1] << " | " << digits[0][2] << endl;
    cout << " ___|___|___" << endl;
    cout << "  " << digits[1][0] << " | " << digits[1][1] << " | " << digits[1][2] << endl;
    cout << " ___|___|___" << endl;
    cout << "  " << digits[2][0] << " | " << digits[2][1] << " | " << digits[2][2] << endl;
    cout << "    |   |   " << endl;
}

bool CheckWinner(char digits[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (digits[i][0] == digits[i][1] && digits[i][0] == digits[i][2] || digits[0][i] == digits[1][i] && digits[0][i] == digits[2][i]){ 
            cout << "Congratulations!1" << endl;
            return true;
            
        }
        if (digits[0][0] == digits[1][1] && digits[1][1] == digits[2][2] || digits[0][2] == digits[1][1] && digits[1][1] == digits[2][0]) {
            cout << "Congratulations!2" << endl;
            return true;
            
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (digits[i][j] != 'x' && digits[i][j] != '0') {
                return false;
            }
        }
    }
    tie = true;
    return false;
}

void GameLoop(char digits[3][3]) {
    system("clear"); //Linux clear screen
    system("cls");  //Windows clear screen

    if (CheckWinner(digits)) {
        cout << "Congratulations!3" << endl;
    }
    if (tie) {
        cout << "TIE!" << endl;
    }

    DrawTable(digits);

    int row;
    int column;
    int digit;

    if (token == 'x') {
        cout << endl;
        cout << "Please enter a correspoinding digit for " + player1 + ":";
        cin >> digit;
        cout << endl;
    }
    if (token == '0') {
        cout << endl;
        cout << "Please enter a correspoinding digit for player '0':";
        cin >> digit;
        cout << endl;
    }

    if (digit == 1) {
        row = 0;
        column = 0;
    }
    else if (digit == 2) {
        row = 0;
        column = 1;
    }
    else if (digit == 3) {
        row = 0;
        column = 2;
    }
    else if (digit == 4) {
        row = 1;
        column = 0;
    }
    else if (digit == 5) {
        row = 1;
        column = 1;
    }
    else if (digit == 6) {
        row = 1;
        column = 2;
    }
    else if (digit == 7) {
        row = 2;
        column = 0;
    }
    else if (digit == 8) {
        row = 2;
        column = 1;
    }
    else if (digit == 9) {
        row = 2;
        column = 2;
    }
    else if (digit < 1 || digit > 9) {
        cout << "Wrong digit" << endl;
    }

    if (token == 'x' && digits[row][column] != 'x' && digits[row][column] != '0') {
        digits[row][column] = 'x';
        token = '0';
    }
    else if (token == '0' && digits[row][column] != 'x' && digits[row][column] != '0') {
        digits[row][column] = '0';
        token = 'x';
    }
    else {
        cout << "That's a wrong space" << endl;
        GameLoop(digits);
    }

    GameLoop(digits);
}

int main()
{
    cout << "Please enter a name for player 1:";
    cin >> player1;

    GameLoop(digits);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
