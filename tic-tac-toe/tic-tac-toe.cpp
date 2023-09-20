// tic-tac-toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

char digits[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int row;
int column;
char token = 'x';
bool tie = false;

void DrawTable(char digits[3][3]) {
    cout << "\n";
    cout << "  " << digits[0][0] << " | " << digits[0][1] << " | " << digits[0][2] << " \n";
    cout << " ___|___|___ \n";
    cout << "  " << digits[1][0] << " | " << digits[1][1] << " | " << digits[1][2] << " \n";
    cout << " ___|___|___ \n";
    cout << "  " << digits[2][0] << " | " << digits[2][1] << " | " << digits[2][2] << " \n";
    cout << "    |   |   \n";
}

void GameLoop(char digits[3][3]) {

    int digit;

    if (token == 'x') {
        cout << "please enter";
        cin >> digit;
    }

    DrawTable(digits);
}

int main()
{

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
